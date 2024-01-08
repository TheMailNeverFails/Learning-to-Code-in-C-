//Learning C++ Arrays

#include <iostream>
#include "other.h"

using namespace std;

//#define Age_length	 4 //pre-processor directives do not end in a semi-colon!!;
const int Age_Length = 4; //this IS a C++ line of code so it requires the = character for assignment and the ; at the end

int age[4]; //this initialises that there are 4 members in this array
float temperature[] = { 31.5, 32.7, 38.9 }; //i am not specifying a length between brackets, as i will assign a list with a constant length (i also did not put an f at the end of each constant, so it's actually a list of doubles, sometimes this is okay like in this instance where the compiler can safely assign the float version of those values to your array) 
//search "implicit conversations" on referencing site for further explination
//

int array_test() { //IMPORTANT: ARRAYS IN THE C LANGUAGE START FROM 0 TO N-MINUS 1 WHERE N IS THE CAPACITY OF THE ARRAY
	age[0] = 25; //notice how we indexed from 0 instead of 1!!!
	age[1] = 20;
	age[2] = 19;
	age[3] = 19;

	cout << "The age array has " << Age_Length << " elements" << endl;
	cout << "Age[0] = " << age[0] << endl;
	cout << "Age[1] = " << age[1] << endl;
	cout << "Age[2] = " << age[2] << endl;
	cout << "Age[3] = " << age[3] << endl;
	cout << endl;
	cout << "Temp[0] = " << temperature[0] << endl;
	cout << "Temp[1] = " << temperature[1] << endl;
	cout << "Temp[2] = " << temperature[2] << endl;	

	return(0);
}