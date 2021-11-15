#include "t_Node.h"

#ifndef T_NODE_CPP
#define T_NODE_CPP

namespace LinkedList {
	template <class T>
	Node<T>::Node(const T val)
		: Node(val, nullptr, nullptr)
	{
	}

	template <class T>
	Node<T>::Node(const T val, Node<T>* next)
		: Node(val, nullptr, next)
	{
	}

	template <class T>
	Node<T>::Node(const T val, Node<T>* prev, Node<T>* next):
		value{val},
		prev{prev},
		next{next}
	{
	}

	template <class T>
	Node<T>::~Node()
	{
	}
}

#endif // !T_NODE_CPP