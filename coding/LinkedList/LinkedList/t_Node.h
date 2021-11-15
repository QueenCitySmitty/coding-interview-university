#pragma once

#ifndef T_NODE_H
#define T_NODE_H

namespace LinkedList {
	template <class T>

	struct Node {
	public:
		Node(const T val);
		Node(const T, Node<T>*);
		Node(const T, Node<T>*, Node<T>*);

		~Node();

		T value;
		Node<T>* next;
		Node<T>* prev;
	};
}

#endif // !T_NODE_H