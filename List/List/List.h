#include <iostream>

class Node
{
public:
	int data;
	Node* next;
};
class List
{
	private:
	int count;
	Node* head = new Node;
	public:
	List();
	~List();
	void Insert(int data);
	void Insert(int index, int data);
	void Remove(int index);
	bool isEmpty();
	int Count();
	int print(int index);
};