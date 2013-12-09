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
	grabs the first item in the list
last()
	grabs the last item in the list
single()
	grabs the first item in the list if there is more than one item in the list it will throw an exception

TODO:
I am going to write some C# linq like functions because I love linq.


singleOrDefault(default)
first(predicate)
last(predicate)
single(predicate)
singleOrDefault(predicate, default)
where(predicate)
getCount(predicate)
orderBy(predicate)

