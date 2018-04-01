/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Date: March 31, 2018
 * Homework Assignment 4
 * 
 * Purpose: Gaddis 8ed Chapter 5 Problem 12 Celsius to Fahrenheit Table
 * In Programming Challenge 10 of Chapter 3 you were asked to write a program that 
 * converts a Celsius temperature to Fahrenheit. Modify that program so it uses a 
 * loop to display a table of the Celsius temperatures 0-20, and their Fahrenheit equivalents. 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float C, 
          F;

    //Initialize Variables

    //Process/Map inputs to outputs
    	cout << "Table of the Celsius to Fahrenheit Equivalents (0-20)\n\n"
		 << "Celsius     Fahrenheit\n";

    //Output data
    for(C = 0; C <= 20; C++)
	{
		F = (9/5 * C) + 32;
		cout << right << setw(4) << C;
		cout << setw(14) << F << endl;
	}
	cout << endl;

    //Exit stage right!
    return 0;
}

