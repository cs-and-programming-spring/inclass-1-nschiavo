


/***********************************************
* Name: Schiavo Nicholas
* Email: schiav55@students.rowan.edu
***********************************************
* Purpose:
*  This program converts a distance in miles to kilometers, meters, centimeters, and millimeters. Then the program calculates the circuference of a circle given its radius.
***********************************************/

#include <iostream>

using namespace std;

const  float PI = 3.14159;


int main()
{
	double miles, kilometers, meters, centimeters, millimeters;
	cout << "********************** \n";
	cout << "This program will convert your distance in Miles to Kilometers \n";
	cout << "********************** \n\n";
	cout << "Input the number of miles. \n";
	//user inputs miles
	cin >> miles;
	//this converts the km to miles
	kilometers = miles * 1.6;
	cout << kilometers << " kilometers.\n\n";
	// this converts km to meters, then centimeters, then millimeters
	meters = kilometers * 1000;
	cout << "That is " << meters << " meters. \n\n";
	centimeters = meters * 100;
	cout << "Or " << centimeters << " centimeters. \n\n";
	millimeters = meters * 1000;
	cout << "Or " << millimeters << " millimeters. \n\n";


	double radius, circumference;
	cout << "********************** \n";
	cout << "This program will calculate the circumference of a circle given its radius. \n";
	cout << "********************** \n\n";
	cout << "Enter the radius of the circle. \n\n";
	//user inputs radius
	cin >> radius;
	//calculate circumference
	circumference = 2 * PI * radius;
	cout << circumference << " is the circumference of the circle. \n\n";
	cout << "The program has ended. \n";

	system("pause");

	return 0;
}