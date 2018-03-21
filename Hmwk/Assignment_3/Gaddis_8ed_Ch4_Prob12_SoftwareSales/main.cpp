/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Date: March 19, 2018 10:13 am
 * 
 * Purpose: Gaddis 8ed Chapter 4 Problem 12 Software Sales
 * A software company sells a package that retails for $99. Quantity discounts are 
 * given according to the following table.
 * Quantity Discount
 * 10–19 = 20% 
 * 20–49 = 30% 
 * 50–99 = 40% 
 * 100 or more = 50%
 * Write a program that asks for the number of units sold and computes the total 
 * cost of the purchase.
 * Input Validation: Make sure the number of units is greater than 0.
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
    int units;
    double subtotal, 
           total;

    //Initialize Variables
    cout<<"Enter number of units sold: ";
        cin>>units;
        
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    //Process/Map inputs to outputs

    //Output data
    if(units > 0 && units < 10)
    {
    total = units * 99;
        cout<<"The total is: $"<<total<<"\n";
    }
    else 
    {
    if(units >= 10 && units <= 19)
    {
        subtotal = (units * 99) * 0.20;
        total = (units * 99) - subtotal;
            cout<<"The total is: $"<<total<<"\n";
    }
    else
    {
    if(units >= 20 && units <=49)
    {
        subtotal = (units * 99) * 0.30;
        total = (units * 99) - subtotal;
            cout<<"The total is: $"<<total<<"\n";
    }
    else
    {
    if(units >= 50 && units <= 99)
    {
        subtotal = (units * 99) * 0.40;
        total = (units * 99) - subtotal;
            cout<<"The total is: $"<<total<<"\n";
    }
    else
    {
    if(units >= 100)
    {
        subtotal = (units * 99) * 0.50;
        total = (units * 99) - subtotal;
            cout<<"The total is: $"<<total<<"\n";
    }
    else
    {
        cout<<"The number of units has to be greater than 0.\n";
    }
    }
    }
    }
    }

    //Exit stage right!
    return 0;
}

