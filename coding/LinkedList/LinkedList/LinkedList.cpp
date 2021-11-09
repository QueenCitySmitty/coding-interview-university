#include "LinkedList.h"
#include "Node.h"

LinkedList::LinkedList() {
	size = 0;
	head = nullptr;
	tail = nullptr;
}

bool LinkedList::isEmpty() {
	return size == 0;
}

int LinkedList::valueAt(int index) {
	Node* ptr = head;

	while (index > 0 && ptr->next != nullptr) {
		--index;
		ptr = ptr->next;
	}

	return ptr->value;
}

int LinkedList::front() {
	return head->value;
}

int LinkedList::back() {
	return tail->value;
}

void LinkedList::pushBack(int value) {
	Node* n = new Node(value);
	Node* curr = head;

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

void LinkedList::pushFront(int value) {
	Node* n = new Node(value);
	
	if (!head) {
		head = n;
	} 
	else {
		n->next = head;
		head = n;
	}

	++size;
}

int LinkedList::popFront() {
	int val{ head->value };
	Node* temp = head;

	head = head->next;

	delete temp;
	--size;

	return val;
}

int LinkedList::popBack() {
	int val{tail->value};
	if (head == tail) {
		head = nullptr;
		tail = nullptr;

		return val;
	} 
	else {
		Node* ptr = head;

		while (ptr->next != tail) {
			ptr = ptr->next;
		}

		ptr->next = nullptr;
		tail = ptr;
	}

	--size;
	return val;
}