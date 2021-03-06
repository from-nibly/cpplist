#include<iostream>
#include "list.h"
using namespace std;

void print(int num) {
	cout << num;	
}

void printAndAdd1(int num) {
  cout << num + 1; 
}

bool greaterThan2 (int i) {
 return i > 2; 
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
  
  //singleOrDefault
  cout << "singleOrDefault:" << l->singleOrDefault(9999) << " ";
  l->traverse(print);
  cout << endl;
  //end singleOrDefault
  
  //where
  cout << "where:";
  l->where(greaterThan2)->traverse(print);
  cout << " ";
  l->traverse(print);
  cout << endl;
  //end where
  
  //first(predicate)
  cout << "first(predicate):" << l->first(greaterThan2) << " ";
  l->traverse(print);
  cout << endl;
  //end first(predicate)
  
  //last(predicate)
  cout << "last(predicate):" << l->last(greaterThan2) << " ";
  l->traverse(print);
  cout << endl;
  //end last(predicate)
  
  //single(predicate)
  cout << "single(predicate):";
  try {
    cout << l->single(greaterThan2) << " ";
  }
  catch (int ex) {
   cout << "An error occured. ";
  }
  l->traverse(print);
  cout << endl;
  //end single(predicate)
  
  //singleOrDefault(predicate)
  cout << "singleOrDefault(predicate):" << l->singleOrDefault(greaterThan2, 9999) << " ";
  l->traverse(print);
  cout << endl;
  //end singleOrDefault(predicate)
  
  //getCount(predicate)
  cout << "getCount(predicate):" << l->getCount(greaterThan2) << " ";
  l->traverse(print);
  cout << endl;
  //end getCount(predicate)
  
  //at()
  cout << "at:" << l->at(2) << " ";
  l->traverse(print);
  cout << endl;
  //end at()
  
}