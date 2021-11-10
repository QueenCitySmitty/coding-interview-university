#pragma once
#include "t_Node.h"

template <class T>

class LinkedList {
public:
	int size;

	// Constructors
	LinkedList();

	T valueAt(int index);	
	bool isEmpty();
	T front();
	T back();

	// Additions
	void pushBack(T value);
	void pushFront(T value);
	void insert(int index, T value);

	// Removals
	T popFront();
	T popBack();
	void erase(int index);

	void reverse();

private:
	Node<T>* head;
	Node<T>* tail;
};