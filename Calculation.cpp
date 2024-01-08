//Calculating an average

#include <iostream>
#include "other.h"
#include <string>
#include <cstring>

using namespace std;
/*                                           old division code i made which could only divide one inputted value
float Division() {
float division_number;
cin >> division_number;
float output = division_number/5;
cout << division_number << " /5 " << " = "; 
cout << (output);
return (output);
}
*/

float Division() {
	cout << "list three numbers so that we can find the average";
	float division_number1, division_number2, division_number3;
	cin >> division_number1 >> division_number2 >> division_number3 ;
	float output = (division_number1 + division_number2 + division_number3) / 5;
	cout << division_number1 << "+" << division_number2 << "+" << division_number3 << " /5 " << " = ";
	cout << (output);
	return (output);
}