/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hector Delgado
 *
 * Created on March 4, 2018, 2:46 PM
 * Purpose: Homework Assignment 1 Gaddis Ch2 Q10
 * Miles Per Gallon
 * A car holds 15 gallons of gasoline and can travel 375 miles before refueling. 
 * Write a program that calculates the number of miles per gallon the car gets. 
 * Display the result on the screen.
 * Hint: Use the following formula to calculate miles per gallon (MPG):
 * MPG   Miles Driven/Gallons of Gas Used
 * 
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
    float gallons,//amount of gallons held in gas tank
          miles,//miles traveled on tank of gas
          MPG;//Miles per Gallon

    //Initialize Variables
    gallons = 15,
    miles = 375;

    //Process/Map inputs to outputs
    MPG = miles/gallons;
    //Output data
    cout<<"A car that travels "<<miles<<" miles on "<<gallons<<" gallons of gasoline before refueling gets "<<MPG<<" MPG."<<endl;

    //Exit stage right!
    return 0;
}
