#include <iostream>

class Node
{
public:
	int data;
	Node* next;
};
class Queue
{
private:
	int count;
	Node* head = new Node;
public:
	Queue();
	~Queue();

	void Enqueue(int data);
	int Dequeue();
	int Peek();
	bool isEmpty();
};