/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hector Delgado
 *
 * Created on March 12, 2018, 4:45 PM
 * Purpose: Gaddis 8ed Chapter 3 Problem 11 Automobile Cost
 * Write a program that asks the user to enter the monthly costs for the following 
 * expenses incurred from operating his or her automobile: loan payment, insurance, 
 * gas, oil, tires, and maintenance. The program should then display the total monthly 
 * cost of these expenses, and the total annual cost of these expenses.
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
     double loanPayment, insurance, gas, oil, tires, maintenance;
     double monthlyTotal, annualTotal;

    //Initialize Variables
      cout<< "Enter your monthly loan payment: ";
      cin>> loanPayment;
      cout<< "Enter your monthly insurance: ";
      cin>> insurance;
      cout<< "Enter your monthly gas expense: ";
      cin>> gas;
      cout<< "Enter your monthly oil expenses: ";
      cin>> oil;
      cout<< "Enter your monthly tires expenses: ";
      cin>> tires;
      cout<< "Enter your monthly maintenance expenses: ";
      cin>> maintenance;

    //Process/Map inputs to outputs
     monthlyTotal = loanPayment + insurance + gas + oil + tires + maintenance;
     annualTotal = monthlyTotal * 12;

    //Output data
      cout<< setprecision(2) << fixed;
      cout<< "\n";
      cout<< "Your total monthly expenses are: $"<< monthlyTotal<<endl;
      cout<< "Your total  annual expenses are: $"<< annualTotal<<endl;

    //Exit stage right!
    return 0;
}
