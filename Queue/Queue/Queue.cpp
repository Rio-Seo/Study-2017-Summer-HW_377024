#include "Queue.h"

Queue::Queue()
{
	head->next = NULL;
	count = 0;
}
Queue::~Queue()
{
}
void Queue::Enqueue(int data)
{
	Node* newnode = new Node;
	Node* temp = new Node;
	newnode->data = data;
	temp = head;
	if (isEmpty())
	{
		newnode = head->next;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		newnode=temp->next;
	}
	delete temp;
}
int Queue::Dequeue()
{
	Node* temp = new Node;
	int rdata;
	temp = head->next;
	rdata = temp->data;
	head->next=temp->next;
	delete temp;
	return rdata;	
}
int Queue::Peek()
{
	return head->next->data;
}
bool Queue::isEmpty()
{
	if (head->next == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}