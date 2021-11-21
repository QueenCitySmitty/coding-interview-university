#pragma once

#include "t_LinkedList.h"

#ifndef T_DOUBLYLINKEDLIST_H
#define T_DOUBLYLINKEDLIST_H

template <class T>
class DoublyLinkedList : public LinkedList<T>
{
public:
	DoublyLinkedList()
	{
	}

	~DoublyLinkedList()
	{
	}

	// Additions
	void pushBack(T value) override
	{
		Node<T>* n = new Node<T>(value);

		if (!this->tail) {
			this->head = n;
		}
		else {
			n->prev = this->tail;
			this->tail->next = n;
		}

		this->tail = n;

		++this->size;
	}

	void pushFront(T value) override
	{
		Node<T>* n = new Node<T>(value);

		if (!this->head) {
			this->head = n;
		}
		else {
			this->head->prev = n;
			n->next = this->head;
			this->head = n;
		}

		++this->size;
	}

	void insert(int index, T value) override
	{
		Node<T>* n = new Node<T>{ value };

		if (index == 0)
		{
			n->next = this->head;
			this->head->prev = n;
			this->head = n;
		}
		else {
			Node<T>* ptr = this->head;
			while (index > 1)
			{
				--index;
				ptr = ptr->next;
			}

			n->prev = ptr;

			if (ptr->next) {
				n->next = ptr->next;
				ptr->next->prev = n;
				ptr->next = n;
			}
		}

		++this->size;
	}

	// Removals
	T popFront() override
	{
		auto val{ this->head->value };
		Node<T>* temp = this->head;

		this->head = this->head->next;

		if (this->head)
		{
			this->head->prev = nullptr;
		}

		delete temp;
		--this->size;

		return val;
	}

	T popBack() override
	{
		auto val{ this->tail->value };
		if (this->head == this->tail) {
			this->head = nullptr;
			this->tail = nullptr;

			return val;
		}
		else {
			Node<T>* ptr = this->tail;

			this->tail = this->tail->prev;
			this->tail->next = nullptr;
		}

		--this->size;
		return val;
	}

	void erase(int index) override
	{
		Node<T>* ptr = this->head;
		if (index == 0)
		{
			this->head = this->head->next;
			delete ptr;
		}
		else {
			while (index > 0)
			{
				--index;
				ptr = ptr->next;
			}

			if (ptr->next) {
				ptr->next->prev = ptr->prev;
			}

			ptr->prev->next = ptr->next;

			if (!ptr->next)
			{
				this->tail = ptr;
			}

		}

		--this->size;
	}

	void reverse() override
	{
		Node<T>* prev = nullptr;
		Node<T>* curr = this->head;
		Node<T>* next = !this->head ? nullptr : this->head->next;

		while (curr) {
			curr->next = prev;
			curr->prev = next;
			prev = curr;
			curr = next;
			next = !next ? nullptr : next->next;
		}

		this->tail = this->head;
		this->head = prev;
	}
};

#endif // !T_DOUBLYLINKEDLIST_H