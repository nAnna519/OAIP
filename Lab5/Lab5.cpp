//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Lab5.h"
#include "Queue.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

Queue queue;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	ListQueue->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AddRandomNumberClick(TObject *Sender)
{
	int RandomNumber = rand();
	queue.Add(RandomNumber);
	ListQueue->Clear();
	queue.Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::RemoveAllClick(TObject *Sender)
{
	queue.~Queue();
	ListQueue->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::RemoveFromBeginClick(TObject *Sender)
{
	try
	{
		queue.Remove();
		ListQueue->Clear();
		queue.Show();
	}
	catch(...)
	{

	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AddOwnNumberClick(TObject *Sender)
{
	int OwnNumber = StrToInt(EnterOwnNumber->Text);
	queue.Add(OwnNumber);
	EnterOwnNumber->Clear();
	ListQueue->Clear();
	queue.Show();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::AddNRandomNumberClick(TObject *Sender)
{
	int CountRandomNumber = StrToInt(EnterNRandomNumber->Text);
	for (int i = 1; i <= CountRandomNumber; i++)
	{
		int RandomNumber = rand();
		queue.Add(RandomNumber);
		ListQueue->Clear();
		queue.Show();
	}
	EnterNRandomNumber->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SortClick(TObject *Sender)
{
	queue.SortBubble();
	ListQueue->Clear();
	queue.Show();
}
//---------------------------------------------------------------------------

