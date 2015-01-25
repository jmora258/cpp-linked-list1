
struct Node 
{
	string value; 
	Node *next; 
}; 

LinkedList::LinkedList()
{
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



























