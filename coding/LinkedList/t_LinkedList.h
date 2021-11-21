#pragma once

#include "t_Node.h"

#ifndef T_LINKEDLIST_H
#define T_LINKEDLIST_H

template <class T>
class LinkedList {
public:
	int size;
	Node<T>* head;
	Node<T>* tail;

	// Constructors
	LinkedList() :
		size{ 0 },
		head{ nullptr },
		tail{ nullptr }
	{
	}

	~LinkedList() 
	{
		Node<T>* curr = head;

		if (head) {
			Node<int>* next = curr->next;

			while (curr) {
				next = curr->next;
				delete curr;
				curr = next;
			}
		}
	}

	T valueAt(int index)
	{
		Node<T>* ptr = head;

		while (index > 0 && ptr->next) {
			--index;
			ptr = ptr->next;
		}

		return ptr->value;
	}

	bool isEmpty()
	{
		return size == 0;
	}

	T front()
	{
		return head->value;
	}

	T back()
	{
		return tail->value;
	}

	// Additions
	virtual void pushBack(T value)
	{
		Node<T>* n = new Node<T>(value);
		Node<T>* curr = head;

		if (!curr) {
			head = n;
		}
		else {
			while (curr->next) {
				curr = curr->next;
			}

			curr->next = n;
		}

		tail = n;

		++size;
	}

	virtual void pushFront(T value)
	{
		Node<T>* n = new Node<T>(value);

		if (!head) {
			head = n;
		}
		else {
			n->next = head;
			head = n;
		}

		++size;
	}

	virtual void insert(int index, T value)
	{
		Node<T>* n = new Node<T>{ value };

		if (index == 0)
		{
			n->next = head;
			head = n;
		}
		else {
			auto ptr = head;
			while (index > 1)
			{
				--index;
				ptr = ptr->next;
			}

			n->next = ptr->next;
			ptr->next = n;
		}

		++size;
	}

	// Removals
	virtual T popFront()
	{
		T val{ head->value };
		Node<T>* temp = head;

		head = head->next;

		delete temp;
		--size;

		return val;
	}

	virtual T popBack()
	{
		auto val{ tail->value };
		if (head == tail) {
			head = nullptr;
			tail = nullptr;

			return val;
		}
		else {
			Node<T>* ptr = head;

			while (ptr->next != tail) {
				ptr = ptr->next;
			}

			ptr->next = nullptr;
			tail = ptr;
		}

		--size;
		return val;
	}

	virtual void erase(int index)
	{
		Node<T>* ptr = head;
		if (index == 0)
		{
			head = head->next;
			delete ptr;
		}
		else {
			while (index > 1)
			{
				--index;
				ptr = ptr->next;
			}

			auto temp = ptr->next;
			ptr->next = ptr->next->next;

			delete temp;
		}

		--size;
	}

	virtual void reverse()
	{
		Node<T>* prev = nullptr;
		Node<T>* curr = head;
		Node<T>* next = !head ? nullptr : head->next;

		while (curr) {
			curr->next = prev;
			prev = curr;
			curr = next;
			next = !next ? nullptr : next->next;
		}

		tail = head;
		head = prev;
	}
};

#endif // !T_LINKEDLIST_H