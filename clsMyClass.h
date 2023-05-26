//---------------------------------------------------------------------------

#ifndef clsMyClassH
#define clsMyClassH
//---------------------------------------------------------------------------
#endif

#include <vcl.h>

// Base class
class Vehicle
{
private:
	String _brand;

public:
	Vehicle();
	Vehicle(String sBrand);

	__property String brand = { read = _brand, write = _brand };

	String __fastcall honk();
};

//---------------------------------------------------------------------------
//---------------------------------------------------------------------------

// Derived class
class Car : public Vehicle
{
private:	// all members are private by default...
	String _model;
	int _year;
	int _maxspeed = 0;

protected:

public:
	Car();
	Car(String sbrand, String sModel, int iYear);

	__property String model = { read = _model, write = _model };
	__property String year = { read = _year, write = _year };

	String __fastcall honk();

	// Setter
	void maxspeed(int s) {		_maxspeed = s;		}
	// Getter
	int maxspeed() {			return _maxspeed;		}
};