/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hector Delgado
 *
 * Created on March 4, 2018, 12:08 PM
 * Purpose: Homework Assignment 1 Gaddis Ch 2 Q1
 * Sum of Two Numbers: 
 * Write a program that stores the integers 50 and 100 in variables, and stores the sum of these two in a variable named total. 
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
    float a, //first integer
          b, //second integer
          total; 

    //Initialize Variables
    a=50;
    b=100;

    //Process/Map inputs to outputs
    total = a+b;

    //Output data
    cout<<"The sum of "<< a<<" + "<<b<< " = "<<total<<endl;

    //Exit stage right!
    return 0;
}
