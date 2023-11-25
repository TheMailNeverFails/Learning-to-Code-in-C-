//not really use 
// //Exercise 02_04
//type inference with auto

#include <iostream>
#include <typeinfo>
#include "other.h"

using namespace std;
auto a = 8;
auto b = 12345678901;
auto c = 3.14f; //(trailing f is a constant specifier for floats) (you can also use doubles for more accurate (longer) real numbers (decimal point numbers)
auto d = 3.15; //without trailing f, floating point constants are doubles by default
auto e = true; //true is a boolean constant which is 1 but we're using the constant true because it's defined IN the bool type
auto f = 'd'; 

void Type_ID_testing() {
	// we will print out the type of each variable in a seperate line using the type ID operator from the type info header (line 5)
	cout << typeid (a).name() << endl;
	cout << typeid (b).name() << endl;
	cout << typeid (c).name() << endl;
	cout << typeid (d).name() << endl;
	cout << typeid (e).name() << endl;
	cout << typeid (f).name() << endl;



}