//---------------------------------------------------------------------------

#ifndef QueueH
#define QueueH
#include <vcl.h>
#include "Lab5.h"
#include <iostream.h>

//---------------------------------------------------------------------------

// Queue element
struct Node
{
	int x;
	Node *Next;
	Node *Prev;
};

class Queue
{
	Node *Head;
	Node *Tail;
	public:
	Queue (): Head(NULL), Tail(NULL) {};// Constructor
	~Queue ();
	void Show ();
	void Add (int x);
	void Remove();
	void SortBubble();
};

#endif
