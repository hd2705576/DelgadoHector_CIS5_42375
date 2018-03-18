/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hector Delgado
 *
 * Created on March 4, 2018, 2:23 PM
 * Purpose: Homework Assignment 1 Gaddis Ch2 Q4
 * Average of Values
 * To get the average of a series of values, you add the values up and then divide 
 * the sum by the number of values. Write a program that stores the following values 
 * in five different variables: 28, 32, 37, 24, and 33. The program should first calculate 
 * the sum of these five variables and store the result in a separate variable named sum. 
 * Then, the program should divide the sum variable by 5 to get the average. Display the 
 * average on the screen.
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
    float val_one,
          val_two,
          val_thr,
          val_fou,
          val_fiv,
          sum,//sum of five values
          average;//average of the five values

    //Initialize Variables
    val_one = 28, 
    val_two = 32, 
    val_thr = 37, 
    val_fou = 24, 
    val_fiv = 33;

    //Process/Map inputs to outputs
    sum = val_one + val_two + val_thr + val_fou + val_fiv;
    average = sum/5;

    //Output data
    cout<<"The sum of "<<val_one<<" + "<<val_two<<" + "<<val_thr<<" + "<<val_fou<<" + "<<val_fiv<< " = " <<sum<<endl;
    cout<<"The average is: "<<average<<endl;

    //Exit stage right!
    return 0;
}
