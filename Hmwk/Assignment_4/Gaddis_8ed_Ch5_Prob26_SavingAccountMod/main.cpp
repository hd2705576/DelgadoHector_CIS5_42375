/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Date: March 31, 2018 
 * Homework Assignment 4
 * 
 * Purpose: Gaddis 8ed Chapter 5 Problem 26 Using Files—Savings Account Balance Modification
 * Modify the Savings Account Balance program described in Programming Challenge 25 
 * so that it writes the final report to a file. After the program runs, print the file 
 * to hand in to your instructor.
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    	ofstream OutputFile;			// Define ofstream object

            float strtBal,                // Starting Balance
		   deposit,				    // Monthly deposits
		   wthDrwn,				// Monthly withdrawls
		   totDepo  = 0,			// Total deposits
		   totalWd  = 0,			// Total withdrawls
		   mthStrt = 0, 			// Monthly starting balance
		   mthInt,					// Monthly interest
		   totInt   = 0,			// Total Interest
		   mthEnd,					// Monthly ending balance
		   annInt;					// Annual Interest

    //Initialize Variables
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
			cin  >> deposit;

			if (deposit < 0)
			{	
				cout << "Invalid integer.\n"
					 << "Deposits must be a positive integer.\n";
			}

		} while (deposit < 0); 

		cout << endl;
		totDepo += deposit;

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
					cout << "The Balacne must be greater than withdrawals.\n";
				}
			}
		  
		} while (wthDrwn < 0 || wthDrwn > totDepo);

		cout << endl;

		// Accumulate total withdrawn
		totalWd += wthDrwn;

		// Calculate monthly ending balance
		mthEnd = mthStrt + deposit - wthDrwn;

		// Calculate monthly interest
		mthInt = ((mthStrt + mthEnd) / 2.0) * (annInt / 12.0);

		// Accumulate total Interest
	 	totInt += mthInt;

	 	mthStrt = mthEnd + mthInt;
	}

    //Output data
        OutputFile.open("Savings_Account.txt"); 	// To open file
	if (!OutputFile)							// Test for errors
		cout << "Error opening file.\n";
	else
	{	// Write report to file
		OutputFile << "\n Quarterly Savings Account Report\n"
				   << "------------------------------------\n";
		OutputFile << fixed << showpoint << setprecision(2);
		OutputFile << "Starting balance  : $ " << setw(9) << strtBal << endl;
   		OutputFile << "Total deposits    : $ " << setw(9) << totDepo << endl;
   		OutputFile << "Total withdrawals : $ " << setw(9) << totalWd << endl;
		OutputFile << "Total interest    : $ " << setw(9) << totInt << endl;
		OutputFile << "Final balance     : $ " << setw(9) << mthStrt << endl;
	}
	cout << "Saved to file.";

	OutputFile.close();							// Close file

    //Exit stage right!
    return 0;
}

