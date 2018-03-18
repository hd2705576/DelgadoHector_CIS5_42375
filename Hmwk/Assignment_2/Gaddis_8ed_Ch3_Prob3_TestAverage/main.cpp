/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hector Delgado
 *
 * Created on March 12, 2018, 4:22 PM
 * Purpose: Gaddis 8ed Chapter 3 Problem 3 Test Average
 * Write a program that asks for five test scores. The program should calculate 
 * the average test score and display it. The number displayed should be formatted 
 * in fixed-point notation, with one decimal point of precision.
 */

//System Libraries
#include <iostream>
#include<iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    double score1, score2, score3, score4, score5, average;

    //Initialize Variables
     cout << "Enter score 1: ";
     cin >> score1;
     cout << "Enter score 2: ";
     cin >> score2;
     cout << "Enter score 3: ";
     cin >> score3;
     cout << "Enter score 4: ";
     cin >> score4;
     cout << "Enter score 5: ";
     cin >> score5;

    //Process/Map inputs to outputs
    average = (score1 + score2 + score3 + score4 + score5)/5;
    
    //Output data
     cout << setprecision(1) << fixed;
     cout << "The average score is: " << average << endl;

    //Exit stage right!
    return 0;
}
