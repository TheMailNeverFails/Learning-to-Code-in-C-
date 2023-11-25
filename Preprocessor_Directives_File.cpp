//learning C++
//Preprocessor directives file

//apparently all directives start with the number or pound charachter and occupy one line each

//"#include" actually a directive (this one specifically is used to insert the referenced file into your code, replacing the directive line, the whole code in that file)

#include <iostream> 
#include <string>
#include <cstdint> //this header file is from the C standard library not to be confused with the C++ standard library. This fiel provides fixed length definitions for integer types so that you don't have to depend on the implementation of primitive types like in or char. This header is from the C library so it has C code not C+
#include "other.h"

#define CAPACITY 5000 //this is a directive, it replaces text with the following text, in this case the term "CAPACITY" is replaced with "5000". Note that directives do not end in a semi-colon

using namespace std;

int Preprocessor_Directives() { //delcaring (32-bit)signed integer from stdint format is like this: starts with a U if it is unsigned, then int, then bit length, which is 32, lastly "_t" for type so "int32_t"
	int32_t large = CAPACITY;
	uint8_t Small = 37;
#ifdef DEBUG
	cout << "[About to perform the addition]" << endl;
#endif
	large += Small; //shorthand for "Large = Large + Small"
	cout << "The large integer is " << large << endl;

	//this next type of directive is used for conditional inclusion of code, they are if-else conditionals and work in conjuction with define directives (Remember, these are directives, not the if-then statements in the programming language:
	
	return(0);
}