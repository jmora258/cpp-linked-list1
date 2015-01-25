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
		LinkedList()  {...};
		void addToFront(string v) {...};
		void addToRear(string v)  {...};
		void deleteItem(string v)  {...};
		bool findItem(string v) {...};
		void printItems() {...};
	
	private: 
	
		Node *head; 
};