/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hector Delgado
 *
 * Created on March 4, 2018, 2:55 PM
 * Purpose: Homework Assignment 1 Gaddis Ch2 Q12
 * Land Calculation
 * One acre of land is equivalent to 43,560 square feet. Write a program that 
 * calculates the number of acres in a tract of land with 391,876 square feet.
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
    float acre,//square feet in 1 acre
          land,//total square footage of land
          conversion;//taking total square footage and dividing by square feet in 1 acre

    //Initialize Variables
    acre = 43560;
    land = 391876;

    //Process/Map inputs to outputs
    conversion = land / acre;

    //Output data
    cout<<"There are "<<conversion<<" of acres in "<<land<<" square feet."<<endl;

    //Exit stage right!
    return 0;
}
