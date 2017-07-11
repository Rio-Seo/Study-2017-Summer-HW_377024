#include <iostream>
class Node
{
public:
	int data;
	Node* next;
};
class Stack
{
private:
	int count;
	Node* head = new Node;

public:
	Stack();
	~Stack();

	int top();
	void Push(int data);
	int size();
	int Pop();
	bool isEmpty();
};