/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Date: May 6, 2018 10:03am
 * Purpose: Assignment 5 Problem 7 Celsius to Fahrenheit 
 * Celsius Temperature Table
 * The formula for converting a Temperature from Fahrenheit to Celsius is
 	C = (5 * (F - 32))/9
 * where F is the Fahrenheit temperature and C is the Celsius temperature.
 * Write a function named Celsius that accepts a Fahrenheit temperature as an
 * argument. The function should return the temperature, converted to Celsius.
 * Demonstrate the function by calling it in a loop that displays a table of the
 * Fahrenheit temperatures 0 through 20 and their Celsius equivalents.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototypes
float celsius(int);

int main()
{
	cout << "\nTable of Fahrenheit temperatures 0 - 20\n"
		 << "and their Celsius equivalents.\n\n"
		 << "\n"
		 << "  Fahrenheit       Celsius\n"
		 << "                               \n";
    
	for (int F = 0; F <= 20; F++)
	{
		cout << "      " << setw(2) << F;
		cout << "          "
			 << setw(3) << celsius(F) << endl;
	}
	cout << endl;
	return 0;
}

float celsius(int F)
{
	
	return (5.0 * (F - 32))/9;
}

