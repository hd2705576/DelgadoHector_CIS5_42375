/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hector Delgado
 *
 * Created on March 12, 2018, 4:51 PM
 * Purpose: Gaddis 8ed Chapter 3 Problem 14 Monthly Sales Tax
 * A retail company must file a monthly sales tax report listing the sales for 
 * the month and the amount of sales tax collected. Write a program that asks for 
 * the month, the year, and the total amount collected at the cash register (that is, 
 * sales plus sales tax). Assume the state sales tax is 4 percent and the county sales 
 * tax is 2 percent. If the total amount collected is known and the total sales tax 
 * is 6 percent, the amount of product sales may be calculated as: S=T/1.06 where S 
 * is the product sales and T is the total income (product sales plus sales tax).
 */

//System Libraries
#include <iostream>
#include<iomanip>
#include<string>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
     string month;
     double year;
     double totalCollected;
     double stateTax = 0.04, countyTax = 0.02, sales;
     double stateTaxTotal, countyTaxTotal, totalTax;

    //Initialize Variables
    cout<< "Enter Month: ";
    getline(cin, month);
    cout<< "Enter Year: ";
    cin>> year;
    cout<< "Enter total amount collected at cash register: $";
    cin>> totalCollected;

    //Process/Map inputs to outputs
     sales = totalCollected/1.06;
     stateTaxTotal = sales * stateTax;
     countyTaxTotal = sales * countyTax;
     totalTax = stateTaxTotal + countyTaxTotal;

    //Output data
    cout<< "\n";
    cout<< "Month: " << month << endl;
    cout<< "Year:  " << year << endl;
    cout<< "\n";
    cout<< setprecision(2) << fixed;
    cout<< "Total collected: " << "$" << totalCollected << endl;
    cout<< "Sales: "<< "$" << sales << endl;
    cout<< "County Sales Tax: "<< "$" << countyTaxTotal << endl;
    cout<< "State Sales Tax: "<< "$" << stateTaxTotal << endl;
    cout<< "Total Sales Tax: "<< "$" << totalTax << endl; 

    //Exit stage right!
    return 0;
}
