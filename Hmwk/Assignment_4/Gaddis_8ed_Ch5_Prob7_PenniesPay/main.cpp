/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Date: April 1, 2018
 * Homework Assignment 4
 * 
 * Purpose: Gaddis 8ed Chapter 5 Problem 7 Pennis for Pay
 * Write a program that calculates how much a person would earn over a period of 
 * time if his or her salary is one penny the first day and two pennies the second day, 
 * and continues to double each day. The program should ask the user for the number 
 * of days. Display a table showing how much the salary was for each day, and then show 
 * the total pay at the end of the period. The output should be displayed in a dollar 
 * amount, not the number of pennies.
 * 
 * Input Validation: Do not accept a number less than 1 for the number of days worked.
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
    int Day,
        Worked;
    float dlyPay = 0.01,
	Total = 0;

    //Initialize Variables
	// Ask user the number of days the employee works
	cout << "How many days did the employee work? ";
	cin  >> Worked;
	cout << "\nTable showing how much the\n"
		 << "salary was for each day worked:\n\n" 
		 << "   Day         Salary\n"
	     << "--------------------------\n";

    //Process/Map inputs to outputs
	for(Day = 1; Day <= Worked; Day++)
	{
		
		cout << right << setw(5) << Day;
		cout << left << fixed << showpoint << setprecision(2)
		     << "           " << "$" << dlyPay << endl;
		Total += dlyPay;
		dlyPay *= 2;
	}
        

    //Output data
        cout << "\nTotal month's pay: $" << Total << endl;

    //Exit stage right!
    return 0;
}

