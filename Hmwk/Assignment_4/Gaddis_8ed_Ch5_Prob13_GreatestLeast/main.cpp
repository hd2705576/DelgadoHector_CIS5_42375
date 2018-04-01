/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Date: March 31, 2018
 * Homework Assignment 4
 * 
 * Purpose: Gaddis 8ed Chapter 5 Problem 13 The Greatest and Least of These
 * Write a program with a loop that lets the user enter a series of integers. The user should enter -99 to
 * signal the end of the series. After all the numbers have been entered, the program should
 * display the largest and smallest numbers entered.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    int num, //value of number
        lrg, //space holder for largest number entered
        sml; //space holder for smallest number entered

    //Initialize Variables
    cout << "Enter a series of numbers and the program will display the largest and smallest numbers.\n"
		 << "To exit program, enter -99.\n"
		 << "Please enter a number\n";
    cin>> num;

	lrg = sml = num;

    //Process/Map inputs to outputs
    while (num != -99)
	{			
		cout << "Enter a number: (To exit program enter -99)\n";
		cin  >> num;
		
		if (num > lrg)
			lrg = num;

		if (num < sml)
			sml = num;
	}

    //Output data
    cout << "The largest number entered is " << lrg << "." << endl;
	cout << "The smallest number entered is " << sml << "." << endl;

    //Exit stage right!
    return 0;
}

