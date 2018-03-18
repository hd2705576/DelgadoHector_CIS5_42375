/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hector Delgado
 *
 * Created on March 12, 2018, 5:02 PM
 * Gaddis 8ed Chapter 3 Problem 18 Interest Earned
 * Assuming there are no deposits other than the original investment, the balance 
 * in a savings account after one year may be calculated as Amount = Principal*(1 + (Rate/T) T)
 * Principal is the balance in the savings account, Rate is the interest rate, and 
 * T is the number of times the interest is compounded during a year (T is 4 if the interest 
 * is compounded quarterly). Write a program that asks for the principal, the interest 
 * rate, and the number of times the interest is compounded. 
 */

//System Libraries
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    double principal, interestRate, interestAmount, total;
    int timesCompound;

    //Initialize Variables
     cout << "Enter the principal amount: ";
     cin >> principal;
     cout << "Enter the interest rate: ";
     cin >> interestRate;
     cout << "Enter the number of times the interest is compounded: ";
     cin >> timesCompound;

    //Process/Map inputs to outputs
    interestRate = interestRate/100;
    total = principal * pow((1 + (interestRate/timesCompound)), timesCompound);
    interestAmount = total - principal;
    interestRate = interestRate * 100;

    //Output data
    cout << setprecision(2) << fixed;
    cout << "\n";
    cout << "Interest Rate:" << "\t\t" << interestRate << "%" << endl;
    cout << "Times Compounded:" << "\t" << timesCompound << endl;
    cout << "Principal:" << "\t\t" << "$" << principal << endl;
    cout << "Interest:" << "\t\t" << "$" << interestAmount << endl;
    cout << "Amount in savings:" << "\t" << "$" << total << endl;

    //Exit stage right!
    return 0;
}
