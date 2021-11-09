#include "Node.h"

Node::Node(const int val) {
	Node::value = val;
	Node::next = nullptr;
}

Node::Node(const int val, Node* next) {
	Node::value = val;
	Node::next = next;
}