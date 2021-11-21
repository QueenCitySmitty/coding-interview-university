#pragma once

#include "t_DoublyLinkedList.h"

#ifndef T_QUEUE_H
#define T_QUEUE_H

template <class T>
class Queue
{
public:
	Queue()
	{};

	int Count()
	{
		return linkedList->size;
	}

	void Enqueue(T value)
	{
		linkedList->pushBack(value);
	}

	T Dequeue()
	{
		return linkedList->popFront();
	}

	T Peek()
	{
		return linkedList->front();
	}

private:
	LinkedList<T>* linkedList = new DoublyLinkedList<T>();
};

#endif // !T_QUEUE_HPP