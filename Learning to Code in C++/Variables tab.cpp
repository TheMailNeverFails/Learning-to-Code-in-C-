#include <iostream>
#include "other.h"

int a, b = 5; //i can declare several variables using commas this way
/*these two variables are at the same level of indentation as the main function, this emans that a and b are global variables, global variables are accessible to all parts of the code, because of this, the memory for global variables is managed statically by the compiler, so they are allocated in the data segment of memory, once the program ends their memory is freed
on the otherhand variables may be local to their scope, meaning: you may declare variables inside functions or inside loops. these variables are accessible in their scope and in scopes inside of it, 
once code execution leaves a scope its variables are deleted and memory is freed = these are called automatic variables because they are managed by the compiler and they are usually allocated in the stack segment of memory, which is temporary 
wtf is a scope?? */

void flag_test() {
	bool my_flag; //Variable names have rule so make sure you know about these rules on cpp sites (tldr: variable names can't START with numbers, but may contain letters, numbers and certain symbold like hyphens and underscores, and cannot be the same as any keyword in the language like in or return
	a = 7;
	my_flag = false; 
	cout << endl << "Here are your flag values:" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "flag(false) = " << my_flag << endl; //output shows that flag = 0 (0=false, flag equalling anything is false as there's no assigned value)
	
	my_flag = true;
	cout << endl << "a + b = " << a + b << endl;
	cout << "b - a = " << b - a << endl;
	cout << "flag(true) = " << my_flag << endl;

	unsigned int positive; //this is an unsigned variable which stores a negative number making declarations anywhere in the code and not just at the beginning of a scope is a nice feature of  c++ which hasbn't always been supported in the history of C
	positive = b - a;
	cout << endl << "b - a (unsigned) = " << positive << endl; //the printed string is the number 4294967294 which is 2 raised to the 32nd power -2 (this is the two's complement representation of -2 in binary. Because it is unsigned the intepretation is different, this is why you have to be careful when you decide whether you want to use signed or unsigned integers
}

void variable_test() {
	cout << endl << "Here's an int list test for you!" << endl;	//test hello world, seeing if i can get seperate files called and debugged following my main functions
	cin.get();													//ask someone to explain this function again to me
	for (int numbers = 0; numbers < 10; numbers++)				//number = name i have given this function this loop is essentially a function)
	cout << numbers << endl;									//endl prints each number in the sequence on a new line
}
