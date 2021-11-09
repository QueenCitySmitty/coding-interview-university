#pragma once

class Node {
public:
	int value;
	Node* next;

	Node(int value);
	Node(int value, Node* next);
};