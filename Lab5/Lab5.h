//---------------------------------------------------------------------------

#ifndef Lab5H
#define Lab5H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *EnterNRandomNumber;
	TButton *RemoveAll;
	TButton *RemoveFromBegin;
	TButton *AddOwnNumber;
	TEdit *EnterOwnNumber;
	TListBox *ListQueue;
	TLabel *Label1;
	TButton *AddRandomNumber;
	TLabel *Label3;
	TButton *AddNRandomNumber;
	TButton *Sort;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall AddRandomNumberClick(TObject *Sender);
	void __fastcall RemoveAllClick(TObject *Sender);
	void __fastcall RemoveFromBeginClick(TObject *Sender);
	void __fastcall AddOwnNumberClick(TObject *Sender);
	void __fastcall AddNRandomNumberClick(TObject *Sender);
	void __fastcall SortClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
