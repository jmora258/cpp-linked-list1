/*	Author:	 	Justino Mora
 *	Date:		Jan. 2015				
 */

// LinkedList.cpp

#include "LinkedList.h"
#include <iostream> 

 using namespace std; 

struct Node 
{
	string value; 
	Node *next; 
}; 

LinkedList::LinkedList()
{
	// construct empty list
	head = nullptr; 
}

void LinkedList::printItems()
{
	Node *p; 
	p = head; 
	
	// Linked list traversal 
	while( p != nullptr)
	{
		cout << "Value: " << p->value << endl; 
		p = p->next; 
	}
}

void LinkedList::addToFront(string v)
{
	Node *p; 
	p = new Node; // allocate memory for the new node 

	p->value = v; // store the passed in value
	p->next = head; // link new node to current top node
	head = p; // link head to the new inserted value 
}

void LinkedList::addToRear(string v)
{
	// if list is empty, insert item using addToFront
	if(head == nullptr)
	{
		addToFront(v); 
	}
	else 
	{
		Node *temp; // to traverse the list 

		temp = head; // begin at the head

		// if list has 1+ items, traverse: 
		while(temp->next != nullptr)
		{
			// temp holds address to the last item in the list
			temp = temp->next; 
		}

		Node *n = new Node; // allocate new node to insert item 

		n->value = v; // store the passed in value in the new node
		temp->next = n; // link new node to the last node in the list

		n->next = nullptr; // terminate list
}
























