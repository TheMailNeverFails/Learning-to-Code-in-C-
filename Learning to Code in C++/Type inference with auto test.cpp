//not really use 
// //Exercise 02_04
//type inference with auto
// this creates the variables easily for you without you needing to think about which ones to use (you just have to declare the autos at the start)

#include <iostream>
using namespace std;
#include <typeinfo>
#include "other.h"

auto Auto1 = 8;
auto Auto2 = 12345678901;
auto Auto3 = 3.14f; //(trailing f is a constant specifier for floats) (you can also use doubles for more accurate (longer) real numbers (decimal point numbers)
auto Auto4 = 3.15; //without trailing f, floating point constants are doubles by default
auto Auto5 = true; //true is a boolean constant which is 1 but we're using the constant true because it's defined IN the bool type
auto Auto6 = 'd'; 

void Type_ID_testing() {
	// we will print out the type of each variable in a seperate line using the type ID operator from the type info header (line 5)
	cout << typeid (Auto1).name() << endl;
	cout << typeid (Auto2).name() << endl;
	cout << typeid (Auto3).name() << endl;
	cout << typeid (Auto4).name() << endl;
	cout << typeid (Auto5).name() << endl;
	cout << typeid (Auto6).name() << endl;

}