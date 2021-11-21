#pragma once

#include "t_LinkedList.h"

#ifndef T_STACK_H
#define T_STACK_H

template <class T>
class Stack
{
public:
	Stack()
	{
	}

	void Push(T element)
	{
		linkedList->pushFront(element);
	}

	T Pop()
	{
		return linkedList->popFront();
	}

	T Peek()
	{
		return linkedList->front();
	}

	int Count()
	{
		return linkedList->size;
	}

	bool isEmpty()
	{
		return Count() == 0;
	}


private:
	LinkedList<T>* linkedList = new LinkedList<T>();
};

#endif // !T_STACK_H