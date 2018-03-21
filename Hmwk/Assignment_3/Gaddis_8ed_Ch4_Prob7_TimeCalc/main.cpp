/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Date: March 19, 2018 9:47 am
 * 
 * Purpose: Gaddis 8ed Chapter 4 Problem 7 Time Calculator
 * Write a program that asks the user to enter a number of seconds.
 * There are 60 seconds in a minute. If the number of seconds entered by the user 
 * is greater than or equal to 60, the program should display the number of minutes 
 * in that many seconds.  
 * There are 3,600 seconds in an hour. If the number of seconds entered by the user 
 * is greater than or equal to 3,600, the program should display the number of hours 
 * in that many seconds.
 * There are 86,400 seconds in a day. If the number of seconds entered by the user 
 * is greater than or equal to 86,400, the program should display the number of days 
 * in that many seconds.
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
    double seconds,
           hour,
           day;

    //Initialize Variables
    hour = 3600;
    day = 86400;
    
    cout<<"Enter the number of seconds: ";
    cin>>seconds;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    //Process/Map inputs to outputs

    //Output data
    if(seconds >= 86400)
        cout<<"\nThe seconds you entered = "<<seconds/86400<<" days.\n";
    else{
        if(seconds >= 3600)
        {
            cout<<"\nThe seconds you entered = "<<seconds/3600<<" hours.\n";
        }
    else
        {
        if(seconds >= 60)
        {
            cout<<"\nThe seconds you entered = "<<seconds/60<<" minutes.\n";
        }
    else
        {
        if(seconds < 60 && seconds > 0)
        {
            cout<<"\nThe seconds you entered = "<<seconds<<" seconds.\n";
        }
    else
        {
            cout<<"\nYou must enter a number larger than 0.\n";
        }
        }
        }
        }

    
    //Exit stage right!
    return 0;
}

