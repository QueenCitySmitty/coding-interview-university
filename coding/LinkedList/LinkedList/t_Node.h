#pragma once

namespace LinkedList {
	template <class T>

	class Node {
	public:
		T value;
		Node<T>* next;
		Node<T>* prev;

		Node(const T val);
		Node(const T, Node<T>*);
		Node(const T, Node<T>*, Node<T>*);
	};
}