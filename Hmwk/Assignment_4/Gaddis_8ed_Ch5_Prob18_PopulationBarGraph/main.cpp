/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Date: March 31, 2018
 * Homework Assignment 4
 * 
 * Purpose: Gaddis 8ed Chapter 5 Problem 17 Sales Bar Chart
 *Write a program that asks the user to enter today’s sales rounded to the nearest $100 for
 * each of three stores. The program should then display a bar graph comparing each store’s
 * sales. Create each bar in the graph by displaying a row of asterisks. Each asterisk should
 * represent $100 of sales.
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
         

    //Exit stage right!
    return 0;
}

