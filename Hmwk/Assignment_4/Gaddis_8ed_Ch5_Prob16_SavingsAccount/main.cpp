/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Date: March 31, 2018
 * Homework Assignment 4
 * 
 * Purpose: Gaddis 8ed Chapter 5 Problem 16 Savings Account Balance
 * Write a program that calculates the balance of a savings account at the end of a three month
 * period. It should ask the user for the starting balance and the annual interest rate. A
 * loop should then iterate once for every month in the period, performing the following:
 * A) Ask the user for the total amount deposited into the account during that month.
 * Do not accept negative numbers. This amount should be added to the balance.
 * B) Ask the user for the total amount withdrawn from the account during that
 * month. Do not accept negative numbers or numbers greater than the balance
 * after the deposits for the month have been added in.
 * C) Calculate the interest for that month. The monthly interest rate is the annual
 * interest rate divided by 12. Multiply the monthly interest rate by the average of
 * that month’s starting and ending balance to get the interest amount for the
 * month. This amount should be added to the balance.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
             float strtBal,                             // Starting Balance
		   Deposit,				// Monthly deposits
		   wthDrwn,				// Monthly withdrawals
		   totDepo  = 0,			// Total deposits
		   totalWd  = 0,			// Total withdrawals
		   mthStrt = 0, 			// Monthly starting balance
		   mthInt,                              // Monthly interest
		   totInt   = 0,			// Total Interest
		   mthEnd,				// Monthly ending balance
		   annInt;				// Annual Interest

    //Initialize Variables
        // Ask user to enter the starting balance and the annual interest rate
	cout << "This program calculates the balance of a\n"
	     << "savings account at the end of a three month period.\n\n";
    cout << "What is the starting balance of the account? ";
    cin  >> strtBal;
    cout << endl;

	cout << "Enter the annual interest as a decimal: ";
	cin  >> annInt;
	cout << endl;

	mthStrt += strtBal;

    //Process/Map inputs to outputs
    	// Iterate loop once every month 
	for (int Mth = 1; Mth <= 3; Mth++)
	{

		do
		{	// Ask user to input deposits for the month
			// and validate only positive integers
			cout << "What is the total amount deposited\ninto "
				 << "the account during month " << Mth << "? ";
			cin  >> Deposit;

			if (Deposit < 0)
			{	
				cout << "Invalid integer.\n"
					 << "Deposits must be a positive integer.\n";
			}

		} while (Deposit < 0); 

		cout << endl;
		totDepo += Deposit;

		do
		{	// Ask user to input monthly withdrawal and validate only positive
			// integers and Total deposits is greater than withdrawals
			cout << "What is the total amount withdrawn\nfrom "
				 << "the account during month " << Mth << "? ";
			cin  >> wthDrwn;

			if (wthDrwn < 0 || wthDrwn > totDepo)
			{	
				cout << "Invalid integer.\n";

				if (wthDrwn < 0)
				{
					cout << "Withdrawals must be a positive integer.\n";
				}
				else
				{
					cout << "The balance must be greater than withdrawals.\n";
				}
			}
		  
		} while (wthDrwn < 0 || wthDrwn > totDepo);

		cout << endl;

		// Accumulate total withdrawn
		totalWd += wthDrwn;

		// Calculate monthly ending balance
		mthEnd = mthStrt + Deposit - wthDrwn;

		// Calculate monthly interest
		mthInt = ((mthStrt + mthEnd) / 2.0) * (annInt / 12.0);

		// Accumulate total Interest
	 	totInt += mthInt;

	 	mthStrt = mthEnd + mthInt;
	}

    //Output data
    	// Display report
	cout << "\n Quarterly Savings Account Report\n"<< "\n";
	cout << fixed << showpoint << setprecision(2);
	cout << "Starting balance  : $ " << setw(9) << strtBal << endl;
   	cout << "Total deposits    : $ " << setw(9) << totDepo << endl;
   	cout << "Total withdrawals : $ " << setw(9) << totalWd << endl;
	cout << "Total interest    : $ " << setw(9) << totInt << endl;
	cout << "Final balance     : $ " << setw(9) << mthStrt << endl;

    //Exit stage right!
    return 0;
}

