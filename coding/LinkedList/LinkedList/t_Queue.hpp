#pragma once

#include "t_LinkedList.h"

#ifndef T_QUEUE_HPP
#define T_QUEUE_HPP

template <class T>
class Queue
{
public:
	Queue();

	int Count();
	void Enqueue(T);
	T Dequeue();
	T Peek();

private:
	LinkedList::LinkedList<T>* linkedList;
};

#endif // !T_QUEUE_HPP