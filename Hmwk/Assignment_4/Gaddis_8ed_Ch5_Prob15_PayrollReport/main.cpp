/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Date: April 1, 2018
 * Homework Assignment 4
 * 
 * Purpose: Gaddis 8ed Chapter 5 Problem 15 Payroll Report
 * Write a program that displays a weekly payroll report. A loop in the program should ask
 * the user for the employee number, gross pay, state tax, federal tax, and FICA withholdings.
 * The loop will terminate when 0 is entered for the employee number. After the data is
 * entered, the program should display totals for gross pay, state tax, federal tax, FICA with
 * holdings, and net pay.
 * 
 * Input Validation: Do not accept negative numbers for any of the items entered. If the
 * state tax + federal tax + FICA withholdings for any employee is greater than gross
 * pay, print an error message and ask the user to reenter the data for that employee.
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
    	int 	EmplNum;
	float	grossPay,
		stateTx,
		FedTax,
		FICA,
		Wth,
		netPay,
		TotGro = 0,
		TotSt = 0,
		TotFed  = 0,
		TotFICA  = 0,
		TotNet  = 0;

    //Initialize Variables
        cout << "\nThis program generates a weekly payroll Report.\n"
			 << "Please enter Employee Number: ";
		cin  >> EmplNum;

    //Process/Map inputs to outputs
    while (EmplNum != 0)
{	
    do
    {
	cout << "Enter gross pay: ";
        cin  >> grossPay;

    while (grossPay < 0)
	{
            cout << "Error. Gross pay must be a positive number."
		<< "Enter gross pay: ";
            cin  >> grossPay;
	}

	cout << "Enter state tax: ";
	cin  >> stateTx;

    while (stateTx < 0)
	{
            cout << "Error. State tax must be a positive number.\n";
            cout << "Enter state tax: ";
            cin  >> stateTx;
	} 
				
            cout << "Enter federal tax: ";
            cin  >> FedTax;

    while (FedTax < 0)
	{
            cout << "Error. Federal tax must be a positive number.\n";
            cout << "Enter federal tax: ";
            cin  >> FedTax;
	} 
				
            cout << "Enter FICA withholdings: ";
            cin  >> FICA;
				
    while (FICA < 0)
	{
            cout << "Error. FICA withholdings must be a positive number.\n";
            cout << "Enter FICA withholdings: ";
            cin  >> FICA;
	} 
	
    Wth = (stateTx + FedTax + FICA);

	if (Wth > grossPay)
            {
                cout << "Error. Invalid data.\n"
		 << "Total withholdings can not be greater than gross pay."
                << "\nPlease enter data for Employee Number: "
		<< EmplNum << endl;
            }


    } while (Wth > grossPay);
			
        TotGro += grossPay;
        TotSt += stateTx;
        TotFed += FedTax;
	TotFICA += FICA;

	netPay = grossPay - Wth;

	TotNet += netPay;
        
	cout << "Please enter Employee Number (to stop Enter 0): ";
	cin  >> EmplNum;

}

    //Output data
    cout << "\n  Weekly Payroll Report\n\n";
	cout << right << fixed << showpoint << setprecision(2);
	cout << "Total Gross Pay   : $" << setw(8) << TotGro << endl;
	cout << "Total State Tax   : $" << setw(8) << TotSt << endl;
	cout << "Total Federal Tax : $" << setw(8) << TotFed << endl;
	cout << "Total FICA        : $" << setw(8) << TotFICA << endl;
	cout << "Total Net Pay     : $" << setw(8) << TotNet << endl << endl;

    //Exit stage right!
    return 0;
}

