/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Date: April 8, 2018
 * Purpose: Laboratory Assignment 7
 * 
 * Add Menu to Homework Assignment 4
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    int oper;               //Choice on Main Menu for Midterm Problems 
    bool select=true;

    //Initialize Loop
    do{
        cout<<"Homework Assignment 4 with Menu"<<endl;
        cout<<"Enter (1) for Problem 1 (2) for Problem 2 (3) for Problem 3 (4) for Problem 4\n";
        cout<<"(5) for Problem 5 (6) for Problem 6 (7) for Problem 7 (8) for Problem 8\n";
        cout<<"(9) for Problem 9 (10) for Problem (11) to Quit Program\n"<<endl;
        cin>>oper;
    
        switch(oper){
            case 1:{
                cout<<" "<<endl;
                cout<<"Problem 1"<<endl;
                //Declare Variables
                const float calMin = 3.9;
                int Min,                //Minutes on Treadmill
                Burnt = 0;         // Accumulator set to 0
                //Initialize Variables
                cout << "\nTable displaying number of calories burnt on a\n"
                << "treadmill that burns 3.9 calories per minute.\n"
                << "\n   Minutes Ran      Calories Burnt\n";
                
                //Process/Map inputs to outputs
                
                //Output data
                for(Min = 10; Min <= 30; Min += 5)
                {
                    Burnt = Min * calMin;
                    cout << "        "<< Min << "               " << Burnt << endl;
                }
                cout << endl;
                cout<<" "<<endl;
                break;
            }    
            case 2:{
                cout<<" "<<endl;
                cout<<"Problem 2"<<endl;
                //Declare Variables
                int Speed,
                Hours,
                X,
                Dist = 0;     // Set accumulator to 0
                
                //Initialize Variables
                // Ask the user to input the speed
                cout << "What is the speed of the vehicle in mph? ";
                cin  >> Speed;
                cout << "How many hours has the vehicle traveled? ";
                cin  >> Hours;
                
                //Process/Map inputs to outputs
                //Output Data
                if (Speed >= 0 && Hours >= 1)
                {
                    cout << "Hour   Distance Traveled\n"
                    << "--------------------------------\n";
                    
                    for (int X = 1; X <= Hours; X++)
                    {
                        
                        Dist += Speed;
                        cout << right << setw(4) << X << "        ";
                        cout << setw(6) << Dist << endl;
                    }
                }
                cout<<" "<<endl;
                break;
            }
            case 3:{
                cout<<" "<<endl;
                cout<<"Problem 3"<<endl;
                //Declare Variables
                int Day,
                Worked;
                float dlyPay = 0.01,
                Total = 0;
                
                //Initialize Variables
                // Ask user the number of days the employee works
                cout << "How many days did the employee work? ";
                cin  >> Worked;
                cout << "\nTable showing how much the\n"
                << "salary was for each day worked:\n\n"
                << "   Day         Salary\n"
                << "--------------------------\n";
                
                //Process/Map inputs to outputs
                for(Day = 1; Day <= Worked; Day++)
                {
                    
                    cout << right << setw(5) << Day;
                    cout << left << fixed << showpoint << setprecision(2)
                    << "           " << "$" << dlyPay << endl;
                    Total += dlyPay;
                    dlyPay *= 2;
                }
                //Output data
                cout << "\nTotal month's pay: $" << Total << endl;
                cout<<" "<<endl;
                break;
            }   
            
            case 4:{
                cout<<" "<<endl;
                cout<<"Problem 4"<<endl;
                //Declare Variables
                int days,                // The number of days they will multiply.
                sizePop;            // The starting number of organisms.
                float dlyIncr;                      // The average daily population increase
                
                //Initialize Variables
                cout << "This program will predict the size of a population of organisms.\n";
                cout << "What is the starting number of organisms? ";
                cin  >> sizePop;
                cout << "What is the average daily population increase (as a percentage)?\n";
                cin  >> dlyIncr;
                cout << "Enter the number of days of growth: ";
                cin  >> days;
                
                //Process/Map inputs to outputs
                // Input Validation
                while (sizePop < 2 || dlyIncr < 0 || days < 1)
                {
                    if (sizePop < 2)
                    {
                        cout << "Error.\nStarting size of population must be greater than 2. \n";
                        cout << "What is the starting number of organisms? ";
                        cin  >> sizePop;
                    }
                    else if (dlyIncr < 0) // Do not accept a negative number for average daily population increase.
                    {
                        cout << "Error.\nAverage daily population must be greater than 0\n. ";
                        cout << "What is the average daily population increase? (as a percentage)\n";
                        cin  >> dlyIncr;
                    }
                    else if (days < 1) // Do not accept a number less than one for the number of days they will multiply.
                    {
                        cout << "Error.\nThe number of days must be greater than 0.\n";
                        cout << "Enter the number of days of growth: ";
                        cin  >> days;
                    }
                }
                
                //Output data
                // Calculate and display daily increase
                cout << "\nTable displaying population increase over "<<days<<" days.\n"
                << "      Day              Size of population\n";
                
                for (int X = 1; X <= days; X++)
                {
                    cout << "      " << setw(2) << X << "                      "
                    << sizePop << endl;
                    sizePop *= (1 + (dlyIncr / 100));
                }
                cout<<" "<<endl;
                break;
            }
                
            case 5:{
                cout<<" "<<endl;
                cout<<"Problem 5"<<endl;
                //Declare Variables
                float C,
                F;
                
                //Initialize Variables
                
                //Process/Map inputs to outputs
                cout << "Table of the Celsius to Fahrenheit Equivalents (0-20)\n\n"
                << "Celsius     Fahrenheit\n";
                
                //Output data
                for(C = 0; C <= 20; C++)
                {
                    F = (9/5 * C) + 32;
                    cout << right << setw(4) << C;
                    cout << setw(14) << F << endl;
                }
                cout << endl;
                break;
            }     
            case 6:{
                cout<<" "<<endl;
                cout<<"Problem 6"<<endl;
                int num, //value of number
                lrg, //space holder for largest number entered
                sml; //space holder for smallest number entered
                
                //Initialize Variables
                cout << "Enter a series of numbers and the program will display the largest and smallest numbers.\n"
                << "To exit program, enter -99.\n"
                << "Please enter a number\n";
                cin>> num;
                
                lrg = sml = num;
                
                //Process/Map inputs to outputs
                while (num != -99)
                {
                    cout << "Enter a number: (To exit program enter -99)\n";
                    cin  >> num;
                    
                    if (num > lrg)
                        lrg = num;
                    
                    if (num < sml)
                        sml = num;
                }
                
                //Output data
                cout << "The largest number entered is " << lrg << "." << endl;
                cout << "The smallest number entered is " << sml << "." << endl;
                cout<<" "<<endl;
                break;
            }    
            
            case 7:{
                cout<<" "<<endl;
                cout<<"Problem 7"<<endl;
                //Declare Variables
                int     EmplNum;
                float    grossPay,
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
                    
                    cout << "Please enter Employee Number (or Enter 0 to see Weekly Payroll Report): ";
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
                cout<<" "<<endl;
                break;
            }
            case 8:{
                cout<<" "<<endl;
                cout<<"Problem 8"<<endl;
                //Declare Variables
                float strtBal,                             // Starting Balance
                Deposit,                // Monthly deposits
                wthDrwn,                // Monthly withdrawals
                totDepo  = 0,            // Total deposits
                totalWd  = 0,            // Total withdrawals
                mthStrt = 0,             // Monthly starting balance
                mthInt,                              // Monthly interest
                totInt   = 0,            // Total Interest
                mthEnd,                // Monthly ending balance
                annInt;                // Annual Interest
                
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
                    {    // Ask user to input deposits for the month
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
                    {    // Ask user to input monthly withdrawal and validate only positive
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
                cout<<" "<<endl;
                break;
            }
            case 9:{
                cout<<" "<<endl;
                cout<<"Problem 9"<<endl;
                //Declare Variables
                int store1, store2, store3, store4, store5;
                
                //Initialize Variables
                // Ask user to enter days sales rounded to the nearest $100
                cout << "To generate today's Sales Bar Chart, enter the\n"
                << "sales for each store rounded to the nearest $100.\n\n";
                
                do
                {
                    cout << "Enter today’s sales for store 1: ";
                    cin  >> store1;
                    
                    if (store1 < 0)
                        cout << "Error. Sales figures must be greater than $0.00.\n";
                    
                    
                    //Process/Map inputs to outputs
                }while (store1 < 0);
                
                do
                {
                    cout << "Enter today’s sales for store 2: ";
                    cin  >> store2;
                    
                    if (store2 < 0)
                        cout << "Error. Sales figures must be greater than $0.00.\n";
                    
                }while (store2 < 0);
                
                do
                {
                    cout << "Enter today’s sales for store 3: ";
                    cin  >> store3;
                    
                    if (store3 < 0)
                        cout << "Error. Sales figures must be greater than $0.00.\n";
                    
                }while (store3 < 0);
                
                do
                {
                    cout << "Enter today’s sales for store 4: ";
                    cin  >> store4;
                    
                    if (store4 < 0)
                        cout << "Error. Sales figures must be greater than $0.00.\n";
                    
                }while (store4 < 0);
                
                do
                {
                    cout << "Enter today’s sales for store 5: ";
                    cin  >> store5;
                    
                    if (store5 < 0)
                        cout << "Error. Sales figures must be greater than $0.00.\n";
                    
                }while (store5 < 0);
                
                
                //Output data
                store1 /= 100;
                store2 /= 100;
                store3 /= 100;
                store4 /= 100;
                store5 /= 100;
                
                
                
                cout << "\n    SALES BAR CHART\n  (Each * = $100)\n"
                << "Store 1: ";
                
                for (int i = 0; i < store1; ++i)
                {
                    cout << "* ";
                }
                cout << "\nStore 2: ";
                
                for (int i = 0; i < store2; ++i)
                {
                    cout << "* ";
                }
                cout << "\nStore 3: ";
                
                for (int i = 0; i < store3; ++i)
                {
                    cout << "* ";
                }
                cout << "\nStore 4: ";
                
                for (int i = 0; i < store4; ++i)
                {
                    cout << "* ";
                }
                cout << "\nStore 5: ";
                
                for (int i = 0; i < store5; ++i)
                {
                    cout << "* ";
                }
                cout << endl;
                cout<<" "<<endl;
                break;
            }
            case 10:{
                cout<<" "<<endl;
                cout<<"Problem 11"<<endl;
                //Declare Variables
                //Declare Variables
                ofstream OutputFile;            // Define ofstream object
                
                float strtBal,                // Starting Balance
                deposit,                    // Monthly deposits
                wthDrwn,                // Monthly withdrawls
                totDepo  = 0,            // Total deposits
                totalWd  = 0,            // Total withdrawls
                mthStrt = 0,             // Monthly starting balance
                mthInt,                    // Monthly interest
                totInt   = 0,            // Total Interest
                mthEnd,                    // Monthly ending balance
                annInt;                    // Annual Interest
                
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
                    {    // Ask user to input deposits for the month
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
                    {    // Ask user to input monthly withdrawal and validate only positive
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
                                cout << "The Balance must be greater than withdrawals.\n";
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
                OutputFile.open("Savings_Account.txt");     // To open file
                if (!OutputFile)                            // Test for errors
                    cout << "Error opening file.\n";
                else
                {    // Write report to file
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
                
                OutputFile.close();
                break;
            }
            case 11:{
                cout<<" "<<endl;
                cout<<"Exiting Assignment 4 Problems"<<endl;
                return 0;
            }
            
            default:{
                cout<<"Please enter a valid response."<<endl;
            }
        }
        
    }while(select==true);
    
    return 0;
}
