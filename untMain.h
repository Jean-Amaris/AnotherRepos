//---------------------------------------------------------------------------

#ifndef untMainH
#define untMainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TfrmMain : public TForm
{
__published:	// IDE-managed Components
	TButton *btnMsgs;
	TButton *btnProject1;
	TButton *Button3;
	TButton *Button4;
	TButton *Button5;
	TButton *Button6;
	TButton *Button7;
	TButton *Button8;
	TButton *Button9;
	TButton *Button10;
	TEdit *edtAny;
	TMemo *memAny;
	TEdit *Edit1;
	TButton *btnClear;
	TButton *btnClose;
	void __fastcall btnMsgsClick(TObject *Sender);
	void __fastcall btnProject1Click(TObject *Sender);
	void __fastcall btnClearClick(TObject *Sender);
	void __fastcall btnCloseClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmMain *frmMain;
//---------------------------------------------------------------------------
#endif
