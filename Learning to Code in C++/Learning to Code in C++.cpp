/*Code notes

Classes contain two pieces of info, data and functions(e.g.Car class would have a data member for The car's make and colour {Car.Make() , Car,Paint()}

Access specifiers : Class info(members) may be public or private (or protected)
	Public members are accessible by any part of the rest of the code
	Private members are only accessible within the class

Inheritance and polymorphism : a class may have sub - classes
	A subclass may inherit members(info) from the superclass(parent class)
	e.g.animal class might have a data member for the number of legs(Animal.legs) which is inherited by the dog subclass(dog.legs).Some subclasses might add other members, such as a bird, which would add a member for wings(Bird.wings)
	inheritance has an interesting feature called polymorphism where the parent class may define some function, but the inherited version of this function is implemented differently among the subclasses making these sibling classes polymorphic
	e.g.you might have different enemy classes which inherit from the parent enemy class and which shares the function "movement" but each inherited enemy class moves differently.If you have a "stop time" ability you would call upon the movement function in these sibling classes and stop them that way
	we end almost every line of code with a semicolon except for example when the line ends in a closing curly bracket

Data types:

	Integers:
		integer numbers may be Signed or unsigned (signed = shows whether it's negative or postiive/ unsigned does not you can store bigger numbers that way)
		there are several integer types:
			int (implementation dependent) which is usually 32 bits but sometimes 16 bits
			char (character) (8 bits wide) was design to represent ASCII characters but it's just an integer
			because these types vary in length and sign a very useful seed library called stdint.h contained portable data types that specify the length and sign support of their types
			for example uint32_t is an unsigned 32 bit integer and int8_t is a signed eight-bit integer. the "u" infront of int specifies signed vs unsigned
			C++ supports Floating point numbers = represents real numbers (numbers with a decimal place) as opposed to integers (whole numbers) e.g. 3.14159, 1.3333, 0.5 or -12.44
			these types implement the IEEE 754 binary floating point standard
			there are three floating point types in c++: Float, Double, long double (difference between them is that double has a much larger range and precision than float. however it's way more computationally expensive to work with doubles than floats (why would you wanna use doubles then? what would you make that requires extrememly long numbers?

	Boolean types:
		unlike C, C++ supports a Boolean Type to represent true and false (the keyword for this is "bool", in C++ the lowercase true and false keyword are defined, so you may assign either of these to a bool
		Also in C++ anything other than 0 = true and 0=false

	String class:
		(chat GPT generated explination on this line): Imagine you have a box, and you can put different things in it, like toys, books, or candies. Each thing is different, Well, in C++, a "string" is like a special box for holding words and sentences. e.g. string friendName = "Alice";
		Strings are not natively supported by the language, like in C, you may work with strings as arrays of characters terminated with the value 0
		however Strings are supported in the standard library as a class
		the string header file "<string>" provides the string class and lots of string manipulation functions

	Pointers:
		Special datatype for memory addresses
		pointers may act as references to existng variables
		the same pointer may be used to access many different variables sequentially

	^^visit sites like cppreference.com (go to the language section > click on basic concepts > basic concepts tab > fundamental types) or cplusplus.com for detailed descriptions of these supported data types

	Variables:
		temporary data storage units
		must be declared prior to being used and the decleration must specify a type and a name
		declarations may contain initialisation ??
		you will have to assign values to your variables
		syntax for popular types: integers are entered as numbers witha  special format for the ratings, the default is decimal like 123 (int:123) or -5.
		a leading zero (e.g. 023) is called an Octal (so be careful), for hexadecimal, start with 0x, like 0x3A, for binary start with 0b (e.g. 0b1100)
		You may specify unsigned with a trailing upper or lowercase U (e.g. 23U)
		floats are entered with the decimal point and at least one digit to the right EVEN if the value happens to be an integer as must specify the floatr type with a trailing f (e.g. 23.0f, 0.0f)
		doubles are default floating point type, so you write the number like a flaot literal without the floating f (e.g. 25.4, -22.5)
		chars: may be entered as integers as long as they fit in 8 bits but their ASCII character interpretation is entered between single quotes (e.g. 'a','X') these special characters that use the backslash escape chracter are the null character to delimit the end of a string and the new line character: '\0','\n')
		String literal: between double quote e.g. "hello"

		variable declarations must include the type and name of the variable and may include an initialisation

	Expressions, Assignments, and operations:

	Expressions:
		-a Symbolic representation of a calculation (like Algebra)
		-May contain variables, constants, and operators
		-every expression must produce a value

	Assignments:
		-A line of code that assigns a value to a variable
		-must include a left handed side and a right handed side expression
		-the left hand side expression must be able to hold a value
		-the data types of both expressions must match (this last point is not enforced by the compiler, as when we assigned a negative number to an unsigned variable (Variables tab.cpp line 24) so as a programmer you are responsible of keeping the code consistent

	Popular operations: https://cplusplus.com/doc/tutorial/operators/
		-Arithmetic: +, -, * (multiplication), / (integer division, that's quotient),  % (modulo or remainder of division)
			 the "/" operator is also for floating point divisions, it all depends on the operands you use
		-bitwise boolean operations (binary operations performed bit by bit between the operands): &, |, ~, ^
			& for "bitwise and", | for "bitwise or", ~ for "bitwise not", ^ for "bitwise xor" (again these are bitwise operations, not logical
		-Logical (you probably want to use in an if statrement's conditions, these evaluate two operants that can either be true or false (remember 0 means false any anything else means true):
			&&(and), ||(or), !(not)
				There is a lack of a logical xor operator (hint: what does the not equal relational operator do?)
		-Relational (to compare values): == (equality ,be careful with this), !=(not equal), >(greater than), <(Less than), >=(greater or equal), <=(less or equal)
		-pointer: *(for indirection), &(for the address of operator), ->(for access to members of classes)
			"*" prefix asterix which de-references the pointer to its right which is its only operand, that is to say it gives you access to the variable the pointer is pointing to, it is NOT the multiplication operator despite sharing the same character
			"&" prefix ampersand returns the address of the variable at its right which is its only operand
			"->" arrow operator which gives you access to members of classes or structures from a pointer

	Type inference with Auto:
		in the c++ 11 standard the lanaguge got a very nice addition called type inference, it's a conveniennt way of creating a variable with a type that suits the value you want to assign it to it
		the only catch is that you must initialise the variable at declaration


Preprocessor Directives:#
		(not really important to me personally as i do frontend dev)
		c++ is a compiled language so the code goes through a pipeline of software toolws which extract the semantic elements written by the programmer (your code is preprocessed prior to compiling)
		one of the first steps your code goes through is the preprocessor (not related to microprocessor)
		there are several directives addressed to the preprocessor directive which contain information about what to add or remove in the code. (directives tell the
		The compiler will receive a somewhat modified or rather preprocessed version of the code.
		These directives like "include" "define" and "ifdef" are useful for libraries, constants, selecting code blocks e.c.t.



*/

using namespace std;
#include <windows.h> //library i used for the sleep function
#include <iostream> //library for input and output
#include <string> //library for strings
#include "other.h" //includes my header tool file 
#include "Variables tab.cpp"//includes information setup in my variable tab file associated
#include "Type inference with auto test.cpp"
#include "Preprocessor_Directives_File.cpp"

/// <summary>
/// Inputs A + B
/// </summary>
/// <returns>the 2 added numbers</returns>
int addition(int A, int B) { //gave this function the name addition, where two integers are inputed and i return this function as an int.
	//int is the datatype we're using for this function, "addition" is what we have named this function, the things in the brackets is the ___ the function output is then made into the additon of the defined integers
	int output = A + B;
	cout << A << " + " << B << " = "; //this function using cout prints the value of A (which i define on later on) prints the string " + " to make it obvious it's an addition and then ends with trhe string " = " which will follow with the added int cout
	return (output);
}

/*void Sleep(int time) {
	Sleep(time);
}
useless function does the same thing Sleep() does*/

int subtraction(int A, int B) {
	int output = A - B;
	cout << A << " - " << B << " = ";
	return (output);
}

int main() {
	string variable_login_name;
	cout << endl << "Please enter your firstname, Marv:" << endl;
	cin >> variable_login_name; //cin only works for single words if i want to use it for strings that contain space i have to use a special function (also Cin uses >> instead of <<)																																
	if (variable_login_name == "Marv") { cout << "Hello again, Marv" << endl; }
	else { cout << "That is not your name, stupid" << endl; } //else {cout...} = if the output is anything other than the predetermined if string then it will print out the error message
	//endl = end line (the next character output will print on the next line)

	Sleep(700); /*I used the "Sleep()" function to slowly print my strings out*/  cout << endl << "Here's a list of Hello world tests:" << endl, cout << "Hello World!" << endl, cout << "Hello PC!" << endl, cout << "Hello Marv!" << endl; //Sleep delay taken from: https://stackoverflow.com/questions/27215705/how-to-delay-output-in-c
	Sleep(900), cout << endl << "Here's some additions!" << endl;
	cout << addition(2, 3) << endl, cout << subtraction(5, 6) << endl;
	/* a namespace is something that can help you group things.std is for standard use only.
	The std namespace groups all the standard things: types like vector and string, algorithms like find, reduce, and even more.
	^^https://devdocs.io/cpp/io/cout
	cout = character output
	can use left bound inserrtion "<<" after cout which is used for output and extraction operator or use the smart inbuilt left bound insertion
	because int main is a function that returns an integer (number) we'll return 0 with the return keyword.
	This code still runs without Return 0 but we put it in because traditionally 0 means no errors came up in the program*/

	Sleep(900), cout << endl, Type_ID_testing(), Sleep(900); //calls my type id function

	Sleep(900), cout << endl, Preprocessor_Directives(), Sleep(900);//Calls my from my preprocessor directive file project

	Sleep(900), flag_test(); //calls my flag variable function

	Sleep(900), variable_test(), Sleep(900); //calls my "hello" variable function from my variable tab.cpp file

	cout << endl << "Get ready for the program to end in:" << endl, Sleep(500), cout << "3, ", Sleep(800), cout << "2, ", Sleep(800), cout << "1" << endl, Sleep(800),
		cout << endl << "Bye, " << variable_login_name, Sleep(400);


	return(0);
}


// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file