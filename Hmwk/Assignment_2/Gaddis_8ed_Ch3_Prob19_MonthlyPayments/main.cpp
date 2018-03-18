/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Purpose: Gaddis 8ed Chapter 3 Problem 19 Monthly Payments
 * Rate is the monthly interest rate, which is the annual interest rate divided by 12. 
 * (12% annual interest would be 1 percent monthly interest.) N is the number of payments, 
 * and L is the amount of the loan. Write a program that asks for these values and displays a report
 *
 * Created on March 12, 2018, 5:06 PM
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
    double rate, annualRate, loanAmount, amountPaidBack, interestPaid, monthlyPayments;
    int numberOfPayments;

    //Initialize Variables
    cout<< "Enter the loan amount: ";
    cin>> loanAmount;
    cout<< "Enter the annual interest rate: ";
    cin>> annualRate;
    cout<< "Enter number of payments: ";
    cin>> numberOfPayments;

    //Process/Map inputs to outputs
    rate = (annualRate/12) / 100;

    monthlyPayments = ((rate*pow((1+rate), numberOfPayments))/(pow((1+rate), numberOfPayments) -1))* loanAmount;

    amountPaidBack = monthlyPayments * numberOfPayments;
    interestPaid = amountPaidBack - loanAmount;

    rate = rate * 100;

    //Output data
    cout << "\n";
    cout << setprecision(2) << fixed;
    cout << "Loan Amount:\t\t$"<< loanAmount << endl;
    cout << "Monthly Interest Rate:\t"<< rate << "%" << endl;
    cout << "Number of Payments:\t$"<< numberOfPayments << endl;
    cout << "Monthly Payment:\t$"<< monthlyPayments << endl;
    cout << "Amount Paid Back:\t$"<< amountPaidBack << endl;
    cout << "Interest Paid:\t\t$"<< interestPaid << endl << endl;

    //Exit stage right!
    return 0;
}
