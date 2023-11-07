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
			*/

#include <windows.h> //library i used for the sleep function
#include <iostream> //library for input and output
#include <string> //library for strings
#include "other.h" //includes my header tool file 
#include "Variables tab.cpp"//includes information setup in my variable tab file associated

	/*(this is a line of code i have chosen not to use >> ) "using namespace std;"
	^^prevents having to include Standard library all the time 
	however this can be seen as lazy as it prevents you from remembering what exactly is included in the standard library and will prevent other people from reading your code  
	initialises the libraries this code will use, this line is a pre-processor directive 
	(ionstream is a library which is part of the C++ standard library, contains objects and functions to print texts to the screen and receive text from the keyboard) 
	Note, pre processor directives do not end with a semi-colon
	 since Cout and endl are members of what is known as the std (standard) namespace you make use this line to use this namespace by default
	 including this prevents you from bhaving to right "std::" before every std member*/
/// <summary>
/// Inputs A + B
/// </summary>
/// <returns>the 2 added numbers</returns>
int addition (int A,int B){ 
	// is "defining" when you're making a function and you have to choose the variable and give that varblae function a name?
	//int is the datatype we're using for this function, "addition" is what we have named this function, the things in the brackets is the ___ the function output is then made into the additon of the defined integers
	int output = A + B;
	std:: cout << A << " + " << B << " = "; //this function using cout prints the value of A (which i define on later on) prints the string " + " to make it obvious it's an addition and then ends with trhe string " = " which will follow with the added int cout
	return (output);

}

/*void Sleep(int time) {
	Sleep(time);
}
useless function does the same thing Sleep() does*/

int subtraction(int A, int B) {
	int output = A - B;
	std::cout << A << " - " << B << " = ";
	return (output);
}

int main(){

	std::string str; //endl = end line (the next character output will print on the next line) 
	std::cout << std::endl << "Please enter your firstname, Marv:" << std::endl;
	std::cin >> str; //cin only works for single words if i want to use it for strings that contain space i have to use a special function (also Cin uses >> instead of <<)																																
	if (str == "Marv") {std::cout << "Hello again, Marv" << std::endl;} else {std::cout<< "That is not your name, stupid" << std::endl; }; //else {std::cout...} = if the output is anything other than the predetermined if string then it will print out the error message

	Sleep(700); /*Sleep i used to slowly print my strings out*/ std::cout << std::endl << "Here's a list of Hello world tests:" << std::endl, std::cout << "Hello World!" << std::endl, std::cout << "Hello PC!" << std::endl, std::cout << "Hello Marv!" << std::endl;
	
	Sleep(900), std::cout << std::endl << "Here's some additions!" << std::endl;
	std::cout << addition(2,3) << std::endl, std::cout << subtraction(5, 6) << std::endl;
	/* a namespace is something that can help you group things.std is for standard use only.
	The std namespace groups all the standard things: types like vector and string, algorithms like find, reduce, and even more.
	^^https://devdocs.io/cpp/io/cout
	cout = character output
	can use left bound inserrtion "<<" after cout which is used for output and extraction operator or use the smart inbuilt left bound insertion
	because int main is a function that returns an integer (number) we'll return 0 with the return keyword. 
	This code still runs without Return 0 but we put it in because traditionally 0 means no errors came up in the program*/

	Sleep(900), flag_test(); //calls my flag variable function

	Sleep(900), variable_test(), Sleep(900); //calls my "hello" variable function from my variable tab.cpp file
	
	std::cout << std::endl << "Get ready for the program to end in:" << std::endl, Sleep(500);
	std::cout << "3, " , Sleep(800) , std::cout << "2, " , Sleep(800) , std::cout << "1" , Sleep(400);
	return(0);
	
}


// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file