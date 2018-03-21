/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Date: March 19, 2018 8:40 am
 * 
 * Purpose: Gaddis 8ed Chapter 4 Problem 2 Roman Numeral Converter
 * Write a program that asks the user to enter a number within the range of 1 through 10. 
 * Use a switch statement to display the Roman numeral version of that number.
 * Input Validation: Do not accept a number less than 1 or greater than 10.
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
    int number;

    //Initialize Variables
    cout << "Enter a number between 1 and 10: ";
    cin >> number;

    //Process/Map inputs to outputs
    if(number < 1 || number > 10)
        cout << "The number cannot be less than 1 or greater than 10. ";
    else{
        switch(number)
        {
            case 1: cout << "The Roman numeral is: I ";
            break;
            case 2: cout << "The Roman numeral is: II ";
            break;
            case 3: cout << "The Roman numeral is: III ";
            break;
            case 4: cout << "The Roman numeral is: IV ";
            break;
            case 5: cout << "The Roman numeral is: V ";
            break;
            case 6: cout << "The Roman numeral is: VI ";
            break;
            case 7: cout << "The Roman numeral is: VII ";
            break;
            case 8: cout << "The Roman numeral is: VIII ";
            break;
            case 9: cout << "The Roman numeral is: IX ";
            break;
            case 10: cout << "The Roman numeral is: X ";
            break;
            default:  cout << "You must enter a number between 1 - 10.";
        }  //switch ends
    }  //else ends

    //Output data

    //Exit stage right!
    return 0;
}

