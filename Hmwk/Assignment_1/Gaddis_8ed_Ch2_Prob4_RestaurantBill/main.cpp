/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hector Delgado
 *
 * Created on March 4, 2018, 2:08 PM
 * Purpose: Homework Assignment 1 Gaddis Ch2 Q4
 * Restaurant Bill
 * Write a program that computes the tax and tip on a restaurant bill for a patron with a $88.67 
 * meal charge. The tax should be 6.75 percent of the meal cost. The tip should be 20 percent of 
 * the total after adding the tax. Display the meal cost, tax amount, tip amount, and total bill 
 * on the screen.
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
    float meal,
          tax,
          tip,
          total;

    //Initialize Variables
    meal = 88.67;
    tax = 0.0675 * meal; //Tax on meal
    tip = (tax + meal) * 0.20; //tip after adding tax to meal price
    total = meal + tax + tip; //total bill
    

    //Process/Map inputs to outputs

    //Output data
    cout<<"the meal charge is: $"<<meal<<endl;
    cout<<"The tax amount is: $"<<tax<<endl;
    cout<<"The tip amount is: $"<<tip<<endl;
    cout<<"The total bill is: $"<<total<<endl;

    //Exit stage right!
    return 0;
}
