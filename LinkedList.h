/*	Author:	 	Justino Mora
 *	Date:		Jan. 2015				
 */

// LinkedList.h

struct Node 
{
	string value; 
	Node *next; 
}; 

class LinkedList 
{
	public: 
		LinkedList();
		~LinkedList();
		void addToFront(string v);
		void addToRear(string v);
		void addItem(string v); // add item to anywhere in the list
		void deleteItem(string v);
		bool findItem(string v);
		void printItems();
	
	private: 
	
		Node *head; 
		Node *tail; 
};