/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Date: April 1, 2018
 * Homework Assignment 4
 * 
 * Purpose: Gaddis 8ed Chapter 5 Problem 6 Distance Traveled
 * The distance a vehicle travels can be calculated as follows:
 * distance = speed * time
 * For example, if a train travels 40 miles per hour for 3 hours, the distance 
 * traveled is 120 miles.
 * Write a program that asks the user for the speed of a vehicle (in miles per hour)
 * and how many hours it has traveled. The program should then use a loop to display 
 * the distance the vehicle has traveled for each hour of that time period. 
 * 
 * Input Validation: Do not accept a negative number for speed and do not accept any 
 * value less than 1 for time traveled.
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
    int Speed,
	Hours,
        X,
	Dist = 0; 	// Set accumulator to 0

    //Initialize Variables
    // Ask the user to input the speed
	cout << "What is the speed of the vehicle in mph? ";
	cin  >> Speed;
	cout << "How many hours has the vehicle traveled? ";
	cin  >> Hours;

    //Process/Map inputs to outputs
    //Output Data
	if (Speed >= 0 && Hours >= 1)
	{
		cout << "Hour   Distance Traveled\n"
		 << "--------------------------------\n";

		for (int X = 1; X <= Hours; X++)
		{
			
			Dist += Speed;
			cout << right << setw(4) << X << "        ";
			cout << setw(6) << Dist << endl;
		}
	}

    //Exit stage right!
    return 0;
}

