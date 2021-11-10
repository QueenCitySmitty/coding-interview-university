#include "t_Node.h"

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
}

template <class T>
Node<T>::Node(const T val, Node<T>* prev, Node<T>* next) {
	Node::value = val;
	Node::prev = prev;
	Node::next = next;
}