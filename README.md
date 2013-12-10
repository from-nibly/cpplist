cpplist
=======

This is a classic link list project.  I really hate the lack of list like abilities in standard C++ so I wrote my own.

This project hides the node class and you never have to interact with it if you dont want to. Some list projects return the entire node rather than the value of the node. I feel this is cumbersome so I just return the value.

This project is starting out with the following functions:

void append(T)
  This function will append one item of the initialized type to the end of the list

void push(T);
  This function will append one item of the initialized type to the begining of the list

T pop();
  This function will remove the first item in the list and return the value of it and return the value of it

T serve();
  This function is the same as pop (in fact it just calls it) this is so you can use the list as a queue while keeping the normal syntax

int getCount();
  getCount returns the number of items in the list.  This is incremented as you append or push so geting the count is in constant time.

void traverse(void (*f) (T));
  traverse simply takes a void (T) function and calls in using every item in the list

void removeAt(int);
  removeAt removes the item at the index given

first()
	grabs the first item in the list.  If there are no items in the list it will throw an exception.
last()
	grabs the last item in the list
single()
	grabs the first item in the list if there is more than one item in the list it will throw an exception

singleOrDefault(default)
	grabs the first item in the list if there is more than one item in the list it will return default;

where(predicate)
  grabs all of the items when the predicate passed returns true. must be a --bool (*) (T)-- function.

first(predicate)
  grabs the first item of the sub list when the predicate passed returns true. Must be a --bool (*) (T)-- function.
  calls this->where(pred)->first();
  
last(predicate)
  grabs the last item of the sub list when the predicate passed returns true. Must be a --bool (*) (T)-- function.
  calls this->where(pred)->last();
  
single(predicate)
  grabs the first item of the sub list when the predicate passed returns true and throws an exception when the count of the list is not 1. The predicate must be a --bool (*) (T)-- function.
  calls this->where(pred)->single();
  
singleOrDefault(predicate, default)
  grabs the first item of the sub list when the predicate passed returns true and returns the default when the count of the list is not 1. The predicate must be a --bool (*) (T)-- function.
  calls this->where(pred)->single();
  
getCount(predicate)
  grabs the count of a sub list when the predicate passsed returns true. The predicate must be a --bool (*) (T)-- function.
  returns this->where(pred)->getCount();
  
at()
  grabs the item at the index.  If the index is larger than the count it throws an exception;

TODO:

orderBy(predicate)
at()
select()

I also need to make some operator overloading

[] should be the same as at()
-  bag type difference
|  bag type intersection
&  bag type union
+  bag type addition
<< traverse with [ , ] to create stream;
