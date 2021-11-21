#pragma once

#ifndef T_NODE_H
#define T_NODE_H

template <class T>
class Node {
public:
	T value;
	Node<T>* next;
	Node<T>* prev;

	Node(T value):
		value{value}, next{nullptr}, prev{nullptr}
	{
		value = value;
	};
};

#endif // !T_NODE_H