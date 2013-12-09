#include<iostream>
using namespace std;

template<class T>
class node {
	public:
		T data;
		node<T> * next;
		node(T);
};

template<class T>
	node<T>::node(T data) {
		this->next = NULL;
		this->data = data;
	}

