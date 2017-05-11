#ifndef StackQueue_H_
#define StackQueue_H_

#include <vector>
#include <list>
using namespace std;

//foward declaration of classes used by class StackQueue
/*
template <class T> class Stack;
template <class T> class Queue;

*/

template <class T>
class Stack
{
public:
	bool empty() {return c.empty();}
	
	int size() {return c.size();}
	
	T& top() {return c.back();}
	
	void push(T& x) {c.push_back(x);}
	
	void pop() {c.pop_back();}
	
protected:
	vector<T> c;
};// end class Stack

template <class T>
class Queue
{
public:
	bool empty() {return c.empty();}
	
	int size() {return c.size();}
	
	T& front() {return c.front();}
	
	T& back() {return c.back();}
	
	void push(T& x) {c.push_back(x);}
	
	void pop() {c.pop_front();}
	
protected:
	list<T> c;
};// end of class Queue

#endif
