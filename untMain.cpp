//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "untMain.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmMain *frmMain;
//---------------------------------------------------------------------------
__fastcall TfrmMain::TfrmMain(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::btnMsgsClick(TObject *Sender)
{
	ShowMessage(L"Show Message works...");

	Application->MessageBox(L"Message Box works too.", L"with a Title",
		MB_OKCANCEL|MB_ICONASTERISK);

	MessageDlg(L"This is new to me", mtError, mbAbortRetryIgnore, 0);

	UnicodeString errorText = "This is a sample message for an error";
	MessageDlg(errorText, mtError, mbAbortRetryIgnore, 0);

}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::btnProject1Click(TObject *Sender)
{
	String str = edtAny->Text.Trim();
	if (str.Length() > 0) {
		btnMsgs->Caption = str;	
	}else {
		edtAny->Text = "There is nothing here";
	}

	for(int i=0; i < str.Length(); i++) {
		Edit1->Text += i;
		memAny->Text += IntToStr(i) +  "\r\n";
	}
}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::btnClearClick(TObject *Sender)
{
	edtAny->Text = "";
	memAny->Lines->Clear();
	Edit1->Text = "";	
}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::btnCloseClick(TObject *Sender)
{
	Close();	
}
//---------------------------------------------------------------------------
