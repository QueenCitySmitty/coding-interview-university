#include "t_LinkedList.h"

template <class T>
LinkedList<T>::LinkedList() {
	size = 0;
	head = nullptr;
	tail = nullptr;
}

template <class T>
T LinkedList<T>::valueAt(int index) {
	Node<T>* ptr = head;

	while (index > 0 && ptr->next != nullptr) {
		--index;
		ptr = ptr->next;
	}

	return ptr->value;
}

template <class T>
bool LinkedList<T>::isEmpty() {
	return size == 0;
}

template <class T>
T LinkedList<T>::front() {
	return head->value;
}

template <class T>
T LinkedList<T>::back() {
	return tail->value;
}

template <class T>
void LinkedList<T>::pushBack(T value) {
	Node<T>* n = new Node<T>(value);
	Node<T>* curr = head;

	if (!curr) {
		head = n;
	}
	else {
		while (curr->next != nullptr) {
			curr = curr->next;
		}

		curr->next = n;
	}

	tail = n;

	++size;
}

template <class T>
void LinkedList<T>::pushFront(T value) {
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

// Removals
template <class T>
T LinkedList<T>::popFront() {
	auto val{ head->value };
	Node<T>* temp = head;

	head = head->next;

	delete temp;
	--size;

	return val;
}

template <class T>
T LinkedList<T>::popBack() {
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

template <class T>
void LinkedList<T>::insert(int index, T value) {
	Node<T>* n = new Node<T>{ value };

	if (index == 0)
	{
		n->next = head;
		head = n;
	}
	else {
		Node<T>* ptr = head;
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

template <class T>
void LinkedList<T>::reverse()
{
	Node<T>* prev = nullptr;
	Node<T>* curr = head;
	Node<T>* next = head == nullptr ? nullptr : head->next;

	while (curr != nullptr) {
		curr->next = prev;
		prev = curr;
		curr = next;
		next = next == nullptr ? nullptr : next->next;
	}

	tail = head;
	head = prev;
}

template <class T>
void LinkedList<T>::erase(int index) {
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

		Node<T>* temp = ptr->next;
		ptr->next = ptr->next->next;

		delete temp;
	}

	--size;
}