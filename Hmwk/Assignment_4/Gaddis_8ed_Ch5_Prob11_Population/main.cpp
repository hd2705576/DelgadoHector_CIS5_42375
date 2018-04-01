/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Date: April 1, 2018
 * Homework Assignment 4
 * 
 * Purpose: Gaddis 8ed Chapter 5 Problem 11 Population
 * Write a program that will predict the size of a population of organisms. The 
 * program should ask the user for the starting number of organisms, their average 
 * daily population increase (as a percentage), and the number of days they will 
 * multiply. A loop should display the size of the population for each day.
 * 
 * Input Validation: Do not accept a number less than 2 for the starting size of the 
 * population. Do not accept a negative number for average daily population increase. 
 * Do not accept a number less than 1 for the number of days they will multiply.
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
    int days,				// The number of days they will multiply.
	sizePop;			// The starting number of organisms.
    float dlyIncr;                      // The average daily population increase

    //Initialize Variables
	cout << "This program will predict the size of a population of organisms.\n";
	cout << "What is the starting number of organisms? ";
	cin  >> sizePop;
	cout << "What is the average daily population increase (as a percentage)?\n";
	cin  >> dlyIncr;
	cout << "Enter the number of days of growth: ";
	cin  >> days;

    //Process/Map inputs to outputs
    	// Input Validation
	while (sizePop < 2 || dlyIncr < 0 || days < 1)
	{
		if (sizePop < 2)
		{ 
			cout << "Error.\nStarting size of population must be greater than 2. \n";
			cout << "What is the starting number of organisms? ";
			cin  >> sizePop;
		}
		else if (dlyIncr < 0) // Do not accept a negative number for average daily population increase.
		{ 
			cout << "Error.\nAverage daily population must be greater than 0\n. ";
			cout << "What is the average daily population increase? (as a percentage)\n";
			cin  >> dlyIncr;
		}
		else if (days < 1) // Do not accept a number less than one for the number of days they will multiply.
		{ 
			cout << "Error.\nThe number of days must be greater than 0.\n";
			cout << "Enter the number of days of growth: ";
			cin  >> days;
		}
	}

    //Output data
    	// Calculate and display daily increase
	cout << "\nTable displaying population increase over "<<days<<" days.\n"
		 << "      Day              Size of population\n";
        
	for (int X = 1; X <= days; X++)
	{
		cout << "      " << setw(2) << X << "                      "
			 << sizePop << endl; 
		sizePop *= (1 + (dlyIncr / 100));
	}

    //Exit stage right!
    return 0;
}

