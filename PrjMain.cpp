//---------------------------------------------------------------------------

#include <fmx.h>
#ifdef _WIN32
#include <tchar.h>
#endif
#pragma hdrstop
#include <System.StartUpCopy.hpp>
//---------------------------------------------------------------------------
USEFORM("uFrame1.cpp", MyFrame1); /* TFrame: File Type */
USEFORM("untMain.cpp", frmMain);
USEFORM("FVForm.cpp", frmFileViewer);
USEFORM("untDataModule.cpp", DataModule1); /* TDataModule: File Type */
USEFORM("untDataBase.cpp", frmDataBase);
//---------------------------------------------------------------------------
extern "C" int FMXmain()
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(TfrmMain), &frmMain);
		Application->CreateForm(__classid(TfrmFileViewer), &frmFileViewer);
		Application->CreateForm(__classid(TDataModule1), &DataModule1);
		Application->CreateForm(__classid(TfrmDataBase), &frmDataBase);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
