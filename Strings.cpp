//Strings in C++

#include <iostream>
#include "other.h"
#include <string>
#include <cstring>

using namespace std;

const int LENGTH1 = 25;

char array_str1[LENGTH1] = "Hey guys! "; //this constant of string means a sequence of ASCII characters terminated by 0 all eight bits of the character after that last space are 0
char array_str2[] = "What's up?";

string std_str1 =  "Hi everybody! ";
string std_str2 = "How's it going?";


int Strings() { //we are going to concatonate the two character arrays and the two string objects seperately
	strcat_s(array_str1, LENGTH1, array_str2); //for the character arrays the cstring header files provides the strcat family of functions (line 6)	visual studio enforces using the strcat_s version of it but i might have to use the strcat library without the underscore, it depends on my standard library distribution
	cout << array_str1 << endl; //operator overlaoding, overloading an operator means that you can redefine the operation performed by an existing operator tapping into the semantics of the language a nice example of this is the plus operator (seen line 23) which for numbers is a simple addition but for the string class it means concatination
	//another convenient feature of this is that none of the operands get modified, both strings become intact after performing the operation. This way we can simply add these two strings together
	cout << std_str1 + std_str2 << endl; 
	/*
	cout << array_str1;
	cout << array_str2;

	cout << std_str1;
	cout << std_str2;
	*/
	return(0);
}
