/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Purpose: Homework Assignment 1 Gaddis Ch2 Q3
 * Sales Tax
 * Write a program that will compute the total sales tax on a $95 purchase. 
 * Assume the state sales tax is 4 percent and the county sales tax is 2 percent.
 *
 * Created on March 4, 2018, 1:53 PM
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
    float purchase,
          stateTax,
          countyTax,
          totalTax;

    //Initialize Variables
    purchase = 95;
    stateTax = 0.04 * purchase;
    countyTax = 0.02 * purchase;

    //Process/Map inputs to outputs
    totalTax = stateTax + countyTax;

    //Output data
    cout<<"The total sales tax on a $95 purchase is $"<<totalTax<<endl;

    //Exit stage right!
    return 0;
}
