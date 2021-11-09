#pragma once
#include "Node.h"

class LinkedList {
public:
	int size;

	LinkedList();
	int valueAt(int);
	bool isEmpty();
	int front();
	int back();

	// Additions
	void pushBack(int);
	void pushFront(int);

	// Removals
	int popFront();
	int popBack();

private:
	Node* head;
	Node* tail;
};