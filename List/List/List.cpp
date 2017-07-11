#include "List.h"

List::List()
{
Node* head = new Node;
	head->next = NULL;
	count=0;
}
List::~List()
{
}
void List::Insert(int data)
{
	Node* newnode = new Node;
	newnode->data = data;
	newnode->next = NULL;

	if (head->next == NULL)
	{
		head->next = newnode;
	}
	else
	{
		Node* temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
		delete temp;
	}
	count++;
}

void List::Insert(int index, int data)
{
	Node* newnode = new Node;
	newnode->data = data;
	Node* temp = new Node;
	temp = head;
	for(int i=0; i<index ; i++)
	{
		temp=temp->next;
	}
	newnode->next = temp->next;
	temp->next = newnode;
	count++;
	delete temp;
}


void List::Remove(int index)
{
	Node* temp = new Node;
	Node* ptemp = new Node;
	ptemp = head->next;
	for (int i = 0; i < index; i++)
	{
		ptemp = ptemp->next;
	}
	temp = ptemp->next;
	ptemp->next = temp->next;	
	delete temp;
	delete ptemp;
}
bool List::isEmpty()
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
int List::Count()
{
	return count;
}
int List::print(int index)
{
	Node* temp = new Node;
	for (int i = 0; i<index; i++)
	{
		temp = temp->next;
	}
	int tdata = temp->data;
	delete temp;
	return tdata;
}