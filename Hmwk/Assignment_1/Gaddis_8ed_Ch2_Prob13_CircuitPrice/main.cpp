/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hector Delgado
 *
 * Created on March 4, 2018, 3:02 PM
 * Purpose: Homework Assignment 1 Gaddis Ch2 Q13
 * Circuit Board Price
 * An electronics company sells circuit boards at a 35 percent profit. 
 * Write a program that will calculate the selling price of a circuit board that 
 * costs $14.95. Display the result on the screen.
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
    float basePrice,//Price without markup
          sellPrice;//Price with 35% profit
    

    //Initialize Variables
    basePrice = 14.95;

    //Process/Map inputs to outputs
    sellPrice = (basePrice * 0.35) + basePrice;

    //Output data
    cout<<"The price of the circuit board when sold is $"<<sellPrice<<"."<<endl;

    //Exit stage right!
    return 0;
}
