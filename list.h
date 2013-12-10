#include<iostream>
#include "node.h"
using namespace std;


template<class T>
	class list {
		private:
			node<T> * head;
			node<T> * tail;
			int count;
		public:
			list();
			void append(T);
			void push(T);
			T pop();
			T serve();
			int getCount();
			void traverse(void (*f) (T));
			void removeAt(int);
			T first();
			T single();
			T last();
			T singleOrDefault(T);
      list<T> * where(bool (*) (T));
	};

template<class T>
	list<T>::list() {
		this->head = NULL;
		this->tail = NULL;
		list::count = 0;
	}

template<class T>
	void list<T>::append(T item) {
		if (this->head == NULL) {
			this->head = new node<T>(item);
			this->tail = this->head;
		}
		else {
			this->tail->next = new node<T>(item);
			this->tail = this->tail->next;
		}
		list::count++;
	}

template<class T>
	void list<T>::push(T item) {
		if(this->head == NULL) {
			this->head = new node<T>(item);
			this->tail = this->head;
		}
		else {
			node<T> * temp = new node<T>(item);
			temp->next = this->head;
			this->head = temp;
		}
		list::count++;
	}

template<class T>
	void list<T>::traverse( void (*f)(T)) {
		node<T> * temp = this->head;
		while(temp != NULL) {
			f(temp->data);
			temp = temp->next;
		}
	}

template<class T>
	T list<T>::pop() {
		node<T> * temp = this->head;
		this->head = this->head->next;
		T rtn = temp->data;
		delete temp;
		list::count--;
		return rtn;
	}

template<class T>
	T list<T>::serve() {
		return list<T>::pop();	
	}

template<class T>
	int list<T>::getCount() {
		return list::count;	
	}


//linq functions ------
template<class T>
	T list<T>::first() {
		if(list::count == 0) {
			throw 1;	
		}
		else {
			return this->head->data;
		}
	}

template<class T>
	T list<T>::single() {
		if(list::count != 1) {
			throw 1;	
		}
		else {
			return this->first();	
		}
	}

template<class T>
	T list<T>::last() {
		if(list::count == 0) {
			throw 1;
		}
		return this->tail->data;	
	}

template<class T>
	T list<T>::singleOrDefault(T def) {
		if(list::count != 1) {
			return def;
		}
		else {
			return this->first();	
		}
	}

template<class T>
  list<T> * list<T>::where(bool (*pred) (T)) {
    list<T> * rtn = new list<T>();
    node<T> * temp = this->head;
    while(temp != NULL) {
      if(pred(temp->data)) {
       rtn->append(temp->data); 
      }
      temp = temp->next;
    }
    return rtn;
  }

//end linq functions ----



template<class T>
	void list<T>::removeAt(int i) {
		node<T> * temp = this->head;
		temp = this->head;
		
		if(i > list::count - 1) {
			throw 1;
		}
		else if( i == 0) {
			this->head = this->head->next;
			delete temp;
		}
		else if(i == list::count - 1) {	
			while(temp->next->next != NULL) {
				temp = temp->next;	
			}
			this->tail = temp;
			this->tail->next = NULL;
			delete temp->next;
		}
		else {
			int pos = 0;
			while(pos < i - 1) {
				temp = temp->next;
				pos++;
			}
			node<T> * rem = temp->next;
			temp->next = temp->next->next;
			delete rem;
		}
		list::count--;
	}

