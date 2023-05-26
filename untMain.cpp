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
