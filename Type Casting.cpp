//type casting 

#include "other.h""
#include <iostream>
#include <cstdint>

using namespace std;

float flt = -7.44;
int32_t sgn;
uint32_t unsgn;

int Type_Casting() {
	sgn = flt; //Since we cannot assign a floating-point value to an integer variable, the type will be converted. This is an implicit type conversion, or casting. When you assign a float or double to an integer, the value gets truncated, so we expect -7 here
	unsgn = sgn; //trying to assign a negative number to an unsigned number Since this isn't reasonable, this time, the number will be copied as-is.That's the 32-bit version of the two's compliment of seven. This is the same binary number, but it means different values in the variables.

	cout << "float: " << flt << endl;
	cout << "int32: " << sgn << endl;
	cout << "unint32: " << unsgn<< endl;


	int Fahrenheit = 100;
	int Celcius;

	Celcius = ((float)5 / 9.0) * (Fahrenheit - 32);

	cout << endl;
	cout << "Fahrenheit: " << Fahrenheit << endl;
	cout << "Celcius: " << Celcius << endl;

	float weight = 10.99;

	cout << endl;
	cout << "Float: " << weight << endl;
	cout << "Integer part: " << (int)weight << endl;
	cout << "Fractional part: " <<(int)((weight - (int) weight ) * 10000) << endl;

	return(0);
}