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


























