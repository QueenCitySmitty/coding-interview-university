#include "t_Node.h"

#ifndef T_NODE_CPP
#define T_NODE_CPP

namespace LinkedList {
	template <class T>
	Node<T>::Node(const T val) {
		Node::value = val;
		Node::next = nullptr;
		Node::prev = nullptr;
	}

	template <class T>
	Node<T>::Node(const T val, Node<T>* next) {
		Node::value = val;
		Node::next = next;
		Node::prev = nullptr;
	}

	template <class T>
	Node<T>::Node(const T val, Node<T>* prev, Node<T>* next) {
		Node::value = val;
		Node::prev = prev;
		Node::next = next;
	}
}

#endif // !T_NODE_CPP