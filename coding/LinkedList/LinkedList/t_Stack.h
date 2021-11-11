#pragma once

#include "t_LinkedList.h"

template <class T>
class Stack
{
public:
	Stack();
	void Push(T element);
	T Pop();
	T Peek();
	int Count();
	bool isEmpty();


private:
	LinkedList::LinkedList<T>* linkedList;
};