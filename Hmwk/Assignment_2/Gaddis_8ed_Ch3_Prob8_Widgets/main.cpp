/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hector Delgado
 *
 * Created on March 12, 2018, 4:40 PM
 * Purpose: Gaddis 8ed Chapter 3 Problem 8 Widgets
 * The Yukon Widget Company manufactures widgets that weigh 12.5 pounds each. 
 * Write a program that calculates how many widgets are stacked on a pallet, based 
 * on the total weight of the pallet. The program should ask the user how much the 
 * pallet weighs by itself and with the widgets stacked on it. It should then calculate 
 * and display the number of widgets stacked on the pallet.
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
     double widgetWeight = 12.5; 
     double palletEmpty, palletWeight;
     double widgetNumber;

    //Initialize Variables
     cout << "How much does the empty pallet weigh (pounds): ";
     cin >> palletEmpty;
     cout << "How much does the pallet weigh (with widgets): ";
     cin >> palletWeight;

    //Process/Map inputs to outputs
     widgetNumber = (palletWeight - palletEmpty) / 12.5;


    //Output data
     cout<< "\n";
     cout << "There are: " << widgetNumber << " widgets on the pallet. \n\n";

    //Exit stage right!
    return 0;
}
