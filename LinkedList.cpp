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
}

void LinkedList::addItem(string v)
{
	// if list is empty, use addToFront() method 
	if( head != nullptr)
	{	
		addToFront(v); 
	} 
	// else if the list has one item, isert in alphabetical order
	// condition decides whether item belongs at the top
	else if ( v < head->value) 
	{ 
		addToFront(v); 
	}
	else // new node to be inserted somewhere in the middle
	{
		// 1. allocate and fill the new item 
		Node *p = head;  // to traverse the list 

		// traverse the list 
		while ( p->next != nullptr )
		{
			// determine where v should be inserted
			if( (v >= p->value) && ( v <= p->next->value) ) 
			{
				break; // break out of the loop 
			}

			p = p->next; // move down the list by one node 
		}

		Node *newItem = new Node; 
		newItem->value = v; // fill in node's value 

		// lastly, link the new node into the one right above the 
		// desired node
		newItem->next = p->next; 
		p->next = newItem; 
	}
}


void LinkedList::deleteItem(string v)
{
	
	// if empty do nothing, just return 
	if(head == nullptr)
		return; 
	// If first node holds the value we want to delete, 
	// proceed to delete it.
	if( head->value == v )
	{
		//  itemToDelete ptr will hold address of the node we want to delete
		Node *itemToDelete = head; 
		// Update head ptr to the second node in the list: 
		head = itemToDelete->next; 
		delete itemToDelete; 

		// done!
		return; 
	}

	// delete item located somewhere between head & last item
	Node *temp = head; // to traverse the list

	while (temp != nullptr) // traverse 
	{
		if( (temp->next != nullptr) && (temp->next->value == v))
		{
			break; // temp points to the node above
		}

		temp = temp->next; 
	}
	if( temp!= nullptr) // found the value to be deleted
	{
		Node *itemToDelete = temp->next; // 
		// link to the node below the target
		temp->next = itemToDelete->next; 
		delete itemToDelete; // delete target node 
	}
}


















