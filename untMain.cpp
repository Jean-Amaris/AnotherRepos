//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "untMain.h"
#include "clsMyClass.h"

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
void __fastcall TfrmMain::btnClsManipClick(TObject *Sender)
{
	Vehicle vh;
	String retVal = vh.honk();
	memAny->Lines->Append(retVal);

	Vehicle vh2("Toyota");
    retVal = vh2.honk();
	memAny->Lines->Append(retVal);

	// Create an object of Car
	Car carObj1;
	carObj1.brand = "BMW";
	carObj1.model = "X5";
	carObj1.year = 1999;
	carObj1.maxspeed(200);

	retVal = carObj1.honk();
	memAny->Lines->Append(retVal);
	memAny->Lines->Append(L"And max speed: " + IntToStr(carObj1.maxspeed()) );

	// Create another object of Car
	Car carObj2("Ford", L"Mustang", 1969);
	carObj2.maxspeed(150);

	retVal = carObj2.honk();
	memAny->Lines->Append(retVal);
	memAny->Lines->Append(L"And max speed: " + IntToStr(carObj2.maxspeed()) );
}
//---------------------------------------------------------------------------

