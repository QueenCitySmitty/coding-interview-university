#include "t_Queue.hpp"
#include "t_Node.cpp"
#include "t_DoublyLinkedList.cpp"

template <class T>
Queue<T>::Queue()
{
	this->linkedList = new LinkedList::LinkedList<T>();
}

template <class T>
int Queue<T>::Count()
{
	return this->linkedList->size;
}

template <class T>
void Queue<T>::Enqueue(const T value)
{
	this->linkedList->pushBack(value);
}

template <class T>
T Queue<T>::Dequeue()
{
	return this->linkedList->popFront();
}

template <class T>
T Queue<T>::Peek()
{
	return this->linkedList->front();
}