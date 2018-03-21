/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Date: March 19, 2018 9:14 am
 * 
 * Purpose: Gaddis 8ed Chapter 4 Problem 4 Areas of Rectangles
 * The area of a rectangle is the rectangle’s length times its width. Write a program 
 * that asks for the length and width of two rectangles. The program should tell the 
 * user which rectangle has the greater area, or if the areas are the same.
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
    double length1, 
           length2, 
           width1, 
           width2, 
           area1, 
           area2;

    //Initialize Variables
    cout << "Enter the length of rectangle 1: ";
        cin >> length1;
    cout << "Enter the width of rectangle 1: ";
        cin >> width1;
    cout << "\nEnter the length of rectangle 2: ";
        cin >> length2;
    cout << "Enter the width of rectangle 2: ";
        cin >> width2;

    //Process/Map inputs to outputs
    area1 = length1 * width1;
    area2 = length2 * width2;

    //Output data
    if(area1 > area2)
        cout << "\nThe area of rectangle 1 is greater than the area of rectangle 2.\n";
    else if(area2 > area1)
        cout << "\nThe area of rectangle 2 is greater than the area of rectangle 1.\n";
    else if(area1 == area2)
        cout << "\nThe areas of both rectangles are the same.\n";

    //Exit stage right!
    return 0;
}

