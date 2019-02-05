/***********************************************
* Name: Schiavo Nicholas
* Email: schiav55@students.rowan.edu
***********************************************
* Purpose:
*  This program converts a distance in miles to kilometers, meters, centimeters, and millimeters. 
*  Then the program calculates the circuference of a circle given its radius.
*  Then the program converts a temperature in celsius to farenheit.
*  Then the program converts a time in years to months, days, hours, minutes, and seconds.
*  Then the program will display my first initial (N) in a grid.
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
	

	double farenheit, celsius;
	cout << "********************** \n";
	cout << "This program will convert a temperature in degrees Celsius to Farenheit.\n";
	cout << "********************** \n\n";
	cout << "Input the temperature in degrees Celsius.\n";
	//user inputs temp in Celsius
	cin >> celsius;
	//converts celsius to farenheit
	farenheit = (9 / 5) * celsius + 32;
	cout << "The temperature is " << farenheit << " degrees Farenheit.\n";

	double years, months, days, hours, minutes, seconds;
	cout << "********************** \n";
	cout << "This program will give the number of months, days, hours, minutes, and seconds of a specified amount of years.\n";
	cout << "********************** \n\n";
	cout << "Input the number of years \n";
    cin >> years; // user will input the number of years
	months = years * 12;
	days = years * 365.25;
	hours = days * 24;
	minutes = hours * 60;
	seconds = minutes * 60;
	cout << years << " years is: " << months << " months, or " << days << " days, or " << hours << " hours, or " << minutes << " minutes, or " << seconds << " seconds.\n\n";

	cout << "[*][ ][ ][ ][ ][*] \n";
	cout << "[*][*][ ][ ][ ][*] \n";
	cout << "[*][ ][*][ ][ ][*] \n";
	cout << "[*][ ][ ][*][ ][*] \n";
	cout << "[*][ ][ ][ ][*][*] \n";
	cout << "[*][ ][ ][ ][ ][*] \n"; 
	// i was not quite sure what we were supposed to do in creating a grid, when i looked online things pointed me to 2d arrays and such things we havent done in class

	system("pause");

	return 0;
}