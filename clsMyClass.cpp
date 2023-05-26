//---------------------------------------------------------------------------

#pragma hdrstop

#include "clsMyClass.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)

 Vehicle::Vehicle() {
	_brand = "Lexus";
}

 Vehicle::Vehicle(String sBrand) {
	_brand = sBrand;
}

String __fastcall Vehicle::honk() {
	return _brand + L" says..:  Tuut, tuut!";
}
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
Car::Car() {
	this->brand = "";
	_model = "";
	_year = 0;
}

Car::Car(String sBrand, String sModel, int iYear) {
	this->brand = sBrand;
	_model = sModel;
	_year = iYear;
}

String __fastcall Car::honk() {
	return this->brand + " , " + _model + " , " + IntToStr(year) +
			 L" says..:  Beep, Beep!";
}
