#pragma once

#include "t_LinkedList.h"

#ifndef T_STACK_H
#define T_STACK_H

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

#endif // !T_STACK_H