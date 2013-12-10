#include<iostream>
#include "list.h"
using namespace std;

void print(int num) {
	cout << num;	
}

void printAndAdd1(int num) {
  cout << num + 1; 
}

bool greaterThan5 (int i) {
 return i > 5; 
}

int main() {
	list<int> * l = new list<int>();
	
  //append
	for (int i = 0; i < 10; i++) {
		l->append(i);
  }
  cout << "append:";
  l->traverse(print);
  cout << endl;
  delete l;
  //end append
  
  //push
  l = new list<int>();
  for (int i = 0; i < 10; i++) {
     l->push(i);
  }
  cout << "push:";
  l->traverse(print);
  cout << endl;
  //end push
  
  //pop
  cout << "pop:";
  for(int i = 0; i < 2; i++) {
     cout << l->pop(); 
  }
  cout << " => ";
  l->traverse(print);
  cout << endl;
  //end pop
  
  //serve
  cout << "serve:";
  for(int i = 0; i < 2; i++) {
     cout << l->serve(); 
  }
  cout << " => ";
  l->traverse(print);
  cout << endl;
  //end serve
  
  //getCount
  cout << "getCount:" << l->getCount() << endl;
  //end getCount
  
  //traverse
  cout << "traverse:";
  l->traverse(printAndAdd1);
  cout << endl;
  //end traverse
  
  //removeAt
  cout << "removeAt:";
  l->removeAt(2);
  l->traverse(print);
  cout << endl;
  //end removeAt
  
  //first
  cout << "first:" << l->first() << " ";
  l->traverse(print);
  cout << endl;
  //end first
  
  //last
  cout << "last:" << l->last() << " ";
  l->traverse(print);
  cout << endl;
  //end last
  
  //single
  cout << "single:";
  try {
    cout << l->single();
  }
  catch (int ex) {
   cout << "An error occured."; 
  }
  cout << endl;
  //end single
  
}