/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hector Delgado
 *
 * Created on March 12, 2018, 4:32 PM
 * Purpose: Gaddis 8ed Chapter 3 Problem 7 Box Office
 * A movie theater only keeps a percentage of the revenue earned from ticket sales. 
 * The remainder goes to the movie distributor. Write a program that calculates a 
 * theater’s gross and net box office profit for a night. The program should ask for 
 * the name of the movie, and how many adult and child tickets were sold. (The price 
 * of an adult ticket is $10.00 and a child’s ticket is $6.00.)
 */

//System Libraries
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv)
{
 //Declare Variables
 string movieName;
 double adultTickets, childTickets, grossBox, netBox, distributorCut;
 double adultPrice = 10.00, childPrice = 6.00;
 
 //Initialize Variables

 cout << "Enter the name of the movie: ";
 getline(cin, movieName);
 cout << "Enter number of adult tickets sold: ";
 cin >> adultTickets;
 cout << "Enter number of child tickets sold: ";
 cin >> childTickets;
 
 //Process/Map inputs to outputs
 grossBox = (adultTickets * adultPrice) + (childTickets * childPrice);
 netBox = grossBox * 0.20;  // 20% box office profit
 distributorCut = grossBox - netBox;
 
 //Output Data
 cout << "Movie Name: " << '"'<< movieName  << '"' << endl;
 cout << "Adult Tickets Sold:"<< " "<< adultTickets << endl;
 cout << "Child Tickets Sold:"<< " "<< childTickets << endl;
 cout << setprecision(2) << fixed;
 
 cout << "Gross Box Office Profit:"<< "$ "<< grossBox << endl;
 cout << "Net Box Office Profit:"<< "$ "<< netBox << endl;
 cout << "Amount Paid to Distributor:"<< "$ "<< distributorCut << endl;

 //Exit stage right!
 return 0;
}