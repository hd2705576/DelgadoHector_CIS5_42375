/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hector Delgado
 *
 * Created on March 12, 2018, 4:57 PM
 * Gaddis 8ed Chapter 3 Problem 15 Property Tax
 * A county collects property taxes on the assessment value of property, which is 
 * 60 percent of the property’s actual value. If an acre of land is valued at $10,000, 
 * its assessment value is $6,000. The property tax is then 75¢ for each $100 of the 
 * assessment value. The tax for the acre assessed at $6,000 will be $45. Write a program 
 * that asks for the actual value of a piece of property and displays the assessment value 
 * and property tax.
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
    double propertyValue, propertyTax, propertyAssessment;

    //Initialize Variables
     cout << "Enter the actual value of the property: ";
     cin >> propertyValue;

    //Process/Map inputs to outputs
      propertyAssessment = propertyValue * 0.60;  
      propertyTax = (propertyAssessment/100) * 0.75;

    //Output data
      cout << setprecision(2) << fixed;
      cout << "\n";
      cout <<"The assessment value is: "<<propertyAssessment<< endl;
      cout << "The property tax is: "<<propertyTax<< endl;

    //Exit stage right!
    return 0;
}
