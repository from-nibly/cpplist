#include<iostream>
#include "list.h"
using namespace std;

void print(int num) {
	cout << num;	
}

bool greaterThan5 (int i) {
 return i > 5; 
}

int main() {
	list<int> * l = new list<int>();
	
	for (int i = 0; i < 10; i++) {
		cout << i << ": ";
		l->push(i);
		cout << l->first() << endl;
		l->traverse(print);
		cout << endl;
	}
  
  list<int> * l2 = l->where(greaterThan5);
  cout << "where:";
  l2->traverse(print);
  cout << endl;
	
	for(int i = 0; i < 9; i++) {
		cout << l->serve() << ": ";
		l->traverse(print);
		cout << endl;
	}
	cout << l->single();
	l->removeAt(0);
	
	cout <<endl << l->getCount() << endl;
}