/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hector Delgado
 *
 * Created on March 12, 2018, 5:14 PM
 * Purpose: Gaddis 8ed Chapter 3 Problem 22 Angle Calculator
 * Write a program that asks the user for an angle, entered in radians. The program 
 * should then display the sine, cosine, and tangent of the angle. (Use the sin, cos, 
 * and tan library functions to determine these values.) The output should be displayed 
 * in fixed-point notation, rounded to four decimal places of precision.
 */

//System Libraries
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    double angle, sine, cosine, tangent;

    //Initialize Variables
     cout<< "Enter an angle (in radians): ";
     cin>> angle;

    //Process/Map inputs to outputs
     sine = sin(angle);
     cosine = cos(angle);
     tangent = tan(angle);

    //Output data
     cout<< "\n";
     cout<< setprecision(4) <<fixed;
     cout<< "The sine is: "<< sine<<endl;
     cout<< "The cosine is: "<< cosine<<endl;
     cout<< "The tangent is: "<< tangent<<endl;

    //Exit stage right!
    return 0;
}
