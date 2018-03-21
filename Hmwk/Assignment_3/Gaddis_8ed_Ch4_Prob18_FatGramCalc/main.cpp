/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Date: March 20, 2018 11:51 am
 * 
 * Purpose: Gaddis 8ed Chapter 4 Problem 18 Fat Gram Calculator
 * Write a program that asks for the number of calories and fat grams in a food. 
 * The program should display the percentage of calories that come from fat. If the 
 * calories from fat are less than 30% of the total calories of the food, it should 
 * also display a message indicating that the food is low in fat.
 * One gram of fat has 9 calories, so
 * Calories from fat   fat grams * 9
 * The percentage of calories from fat can be calculated as Calories from fat total 
 * calories
 * Input Validation: Make sure the number of calories and fat grams are not less 
 * than 0. Also, the number of calories from fat cannot be greater than the total 
 * number of calories. If that happens, display an error message indicating that 
 * either the calories or fat grams were incorrectly entered.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here

#include <iostream>
using namespace std;

int main(int argc, char** agrv)
{
    //Declare Variables
    double pcntCal,
           gramFat,
           calsFat,
           totCals;

    //Initialize Variables
    cout<<"Enter the number of total calories in the food: ";
    cin>>totCals;
    cout<<"Enter the number of grams of fat in the food: ";
    cin>>gramFat;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    //Process/Map inputs to outputs
    calsFat = gramFat * 9;
    pcntCal = (calsFat / totCals) * 100;

    //Output data
    if (totCals >= 0 && gramFat >= 0)	
    {
        if (calsFat < totCals)
	{
            cout<<"Calories that come from fat: ";
		cout<<pcntCal<<"%.\n";
	if (pcntCal<30)
            cout<<"This food is low in fat.\n";
        }
	else
            cout<<"\nError. The calories or grams of fat were entered incorrectly.\n";
	}
	else
            cout << "\nThe number of calories and grams of fat must be 0 or more.\n";
    
    //Exit stage right!
	return 0;
}
