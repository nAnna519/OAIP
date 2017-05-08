//---------------------------------------------------------------------------

#pragma hdrstop

#include "Queue.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
// Add new queue element
void Queue::Add (int x)
{
	Node *temp = new Node;
	temp->Next = NULL;
	temp->x = x;
	if (Head != NULL)
	{
		temp->Prev = Tail;
		Tail->Next = temp;
		Tail = temp;
	}
	else
	{
		temp->Prev = NULL;
		Head = Tail = temp;
	}
}
//Show all queue
void Queue::Show()
{
	if (Head == NULL)
	{
		ShowMessage("Список пуст!");
	}
	Node *temp = Tail;
	temp = Head;
	while(temp != NULL)
	{
		cout << temp->x << " ";
		Form1->ListQueue->Items->Add(temp->x);
		temp = temp->Next;
	}
}
// Bubble sorting
void Queue::SortBubble()
{
	Node *list = Head;
	Node *node;
	Node *node2;
	for(node = list; node; node = node->Next)
	{
		for(node2 = list; node2; node2 = node2->Next)
		{
			if(node->x < node2->x)
			{
				int temp = node->x;
				node->x = node2->x;
				node2->x = temp;
			}
		}
	}
}
// Remove first element
void Queue::Remove()
{
	if (Head == NULL)
	{
		ShowMessage("Список пуст!");
	}
	Node *temp;
	temp = Head->Next;
	delete Head;
	Head = temp;
}
// Destructor
Queue::~Queue()
{
	if (Head == NULL)
	{
		ShowMessage("Список пуст!");
	}
	while (Head)
	{
		Tail = Head->Next;
		delete Head;
		Head = Tail;
	}
}
