#include "t_Stack.h"

template <class T>
Stack<T>::Stack() {
	this->linkedList = new LinkedList::LinkedList<T>();
}

template <class T>
void Stack<T>::Push(const T element) {
	this->linkedList->pushFront(element);
}

template <class T>
T Stack<T>::Pop()
{
	return this->linkedList->popFront();
}

template <class T>
T Stack<T>::Peek()
{
	return this->linkedList->front();
}

template <class T>
int Stack<T>::Count()
{
	return this->linkedList->size;
}

template <class T>
bool Stack<T>::isEmpty()
{
	return this->Count() == 0;
}