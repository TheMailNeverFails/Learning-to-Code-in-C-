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
	std::cout << std::endl << "Here are your flag values:" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "flag = " << my_flag << std::endl; //output shows that flag = 0 (0=false, flag equalling anything is false as there's no assigned value)
}

void variable_test() {
	std::cout << std::endl << "Here's an int list test for you!" << std::endl; //test hello world, seeing if i can get seperate files called and debugged following my main functions
	std::cin.get(); //ask someone to explain this function again to me
	for (int numbers = 0; numbers < 10; numbers++) //number = name i have given this function this loop is essentially a function)
	{
		std::cout << numbers << std::endl;
	} //std::endl prints each number in the sequence on a new line
}

