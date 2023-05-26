//---------------------------------------------------------------------------

#ifndef clsMyClassH
#define clsMyClassH
//---------------------------------------------------------------------------
#endif

#include <vcl.h>

// Base class
class Vehicle {
public:
	String brand = "Ford";
	void honk() {
		//Application -> MessageBox("Tuut, tuut! \n");
	}
};

// Derived class
class Car : public Vehicle {
public:
	Car() { }
	Car(String sbrand, String sModel, int iYear);

	String model;
	int year = 0;

	int speed(int maxSpeed);

	// Setter
	void setSalary(int s) {		iSalary = s;		}
	// Getter
	int getSalary() {			return iSalary;		}

private:	// all members are private by default...
	int iSalary = 0;

protected:

};