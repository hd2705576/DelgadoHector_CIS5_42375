/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Date: April 1, 2018
 * Homework Assignment 4
 * 
 * Purpose: Gaddis 8ed Chapter 5 Problem 4 Calories Burned
 * Running on a particular treadmill you burn 3.6 calories per minute. Write a 
 * program that uses a loop to display the number of calories burned after 5, 10, 
 * 15, 20, 25, and 30 minutes.
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
	const float calMin = 3.9;
        int Min,                //Minutes on Treadmill
	    Burnt = 0; 		// Accumulator set to 0
    //Initialize Variables
	cout << "\nTable displaying number of calories burnt on a\n"
		 << "treadmill that burns 3.9 calories per minute.\n"
		 << "\n   Minutes Ran      Calories Burnt\n";

    //Process/Map inputs to outputs

    //Output data
	for(Min = 10; Min <= 30; Min += 5)
	{
		Burnt = Min * calMin;
		cout << "        "<< Min << "               " << Burnt << endl; 
	}
	cout << endl;

    //Exit stage right!
    return 0;
}

