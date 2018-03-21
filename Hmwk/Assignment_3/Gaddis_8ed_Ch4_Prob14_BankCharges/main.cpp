/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Date: March 20, 2018 7:53 am
 * 
 * Purpose: Gaddis 8ed Chapter 4 Problem 14 Bank Charges
 * A bank charges $10 per month plus the following check fees for a commercial checking 
 * account:
 * $.10 each for fewer than 20 checks $.08 each for 20–39 checks
 * $.06 each for 40–59 checks
 * $.04 each for 60 or more checks
 * The bank also charges an extra $15 if the balance of the account falls below $400 
 * (before any check fees are applied). Write a program that asks for the beginning 
 * balance and the number of checks written. Compute and display the bank’s service 
 * fees for the month.
 * Input Validation: Do not accept a negative value for the number of checks written. 
 * If a negative value is given for the beginning balance, display an urgent message 
 * indicating the account is overdrawn.
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
    int checks;
    double begBalance,
            feeOne, //Determines low balance fee
            feeTwo, //Determines check fee
            totFees; //Low Balance fee and check fee

    //Initialize Variables
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout<<"Enter beginning balance: $";
    cin>>begBalance;

    //Process/Map inputs to outputs
    if(begBalance < 0)
        cout<<"Your account is overdrawn.";
    else 
    {
        cout << "Enter number of checks written: ";
        cin >> checks;
        
    if(begBalance < 400)
        feeOne = 15.00;
    else
        feeOne = 0.00;
    if(checks >= 0 && checks < 20)
        feeTwo = checks * 0.10;
    if(checks >= 20 && checks <= 39)
        feeTwo = checks * 0.08;
    if(checks >= 40 && checks <= 59)
        feeTwo = checks * 0.06;
    if(checks >= 60)
        feeTwo = checks * 0.04;
    if(checks < 0)
        cout << "\nThe number of checks cannot be negative.\n";

    totFees = feeOne + feeTwo;

    //Output data
    cout << "\nLow Balance fee: $" << feeOne << endl;
    cout << "\nCheck fees: $" << feeTwo << endl;
    cout << "\nTotal Monthly fees: $" <<totFees<< "\n";
 }

    //Exit stage right!
    return 0;
}

