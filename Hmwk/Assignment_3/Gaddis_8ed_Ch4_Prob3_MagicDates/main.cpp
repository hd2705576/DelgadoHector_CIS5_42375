/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Date: March 19, 2018 8:52 am
 * 
 * Purpose: Gaddis 8ed Chapter 4 Problem 3 Magic Dates
 * The date June 10, 1960 is special because when we write it in the following format, 
 * the month times the day equals the year.
 * 6/10/60
 * Write a program that asks the user to enter a month (in numeric form), a day, and a 
 * two-digit year. The program should then determine whether the month times the day is 
 * equal to the year. If so, it should display a message saying the date is magic. 
 * Otherwise it should display a message saying the date is not magic.
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
    int month,
        day,
        year;

    //Initialize Variables
    cout << "Enter a month (in numeric form): ";
    cin >> month;
    cout << "Enter a day (1-31): ";
    cin >> day;
    cout << "Enter a two-digit year: ";
    cin >> year;

    //Process/Map inputs to outputs

    //Output data
     if(month * day == year)
         cout << "\nThis date is magic! The month times the day is equal to the two-digit year!\n";
     else
         cout << "\nThis date is not magic! The month times the day is not equal to the two-digit year!\n";

    //Exit stage right!
    return 0;
}

