#include "Stack.h"

Stack::Stack()
{
	head = NULL;
	count=0;
}

Stack::~Stack()
{

}
int Stack::top()
{
	if (isEmpty())
	{
		std::cout<<"Stack Memory Error"<<std::endl;
		exit(-1);
	}
	return head->data;
}
bool Stack::isEmpty()
{
	if (head == NULL)
	{
		return true;
	}
	else
	return false;
}
void Stack::Push(int data)
{
	Node* newnode = new Node;
	newnode->data = data;
	newnode->next = head;
	head=newnode;
	count++;
}
int Stack::Pop()
{
	int rdata;
	Node* rnode;

	if (isEmpty())
	{
		std::cout << "Stack Memory Error" << std::endl;
		exit(-1);
	}
	rdata = head->data;
	rnode=head;

	head = head->next;
	delete rnode;
	return rdata;
}
int Stack::size()
{
	return count;
}