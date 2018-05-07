/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Date: May 6, 2018
 * Purpose: Assignment 5 Problem 14 Order Status Gaddis 8ed Chapter 6
 * Order Status
 * The Middletown Wholesale Copper Wire Company sells spools of copper wiring for
 * $100 each and ships them for $10 apiece. Write a program that displays the status
 * of an order. It should use two functions. The first function asks for the
 * following data and stores the input values in reference parameters.
   • The number of spools ordered.
   • The number of spools in stock.
   • Any special shipping and handling charges (above the regular $10 rate).
 * The second function receives as arguments any values needed to compute and
 * display the following information:
   • The number of ordered spools ready to ship from current stock.
   • The number of ordered spools on backorder (if the number ordered is greater
     than what is in stock).
   • Total selling price of the portion ready to ship (the number of spools
     ready to ship times $100).
   • Total shipping and handling charges on the portion ready to ship.
   • Total of the order ready to ship.
 * The shipping and handling parameter in the second function should have the default
 * argument 10.00.
	Input Validation: Do not accept numbers less than 1 for spools ordered. Do not
	accept a number less than 0 for spools in stock or for shipping and handling
	charges.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getData(int &, int &, float &);
void orderSt(int, int , float);
void numInput(string, int);

int main()
{
	int 	Ordered,
			InStock;

	float	SpecShg;

	getData(Ordered, InStock, SpecShg);

	orderSt(Ordered, InStock, SpecShg);

	return 0;
}

void getData(int &Ordered, int &InStock, float &SpecShg)
{
	cout << "\nThe Middletown Wholesale Copper Wire Order Status Query Form\n"
		 << "                                                          \n";
	do
	{
		cout << "Enter the number of spools ordered: ";
		cin  >> Ordered;

		if(Ordered < 1)
		{
			numInput("Spools ordered", 1);
		}

	} while (Ordered < 1);

	do
	{
		cout << "Enter the number of spools in stock: ";
		cin  >> InStock;

		if (InStock < 0)
		{
			numInput("Spools in stock", 0);
		}
	} while (InStock < 0);

	do
	{
		cout << "Enter the amount of any special shipping and handling charges: ";
		cin  >> SpecShg;

		if(SpecShg < 0)
		{
			numInput("Special Shipping", 0);
		}

	} while (SpecShg < 0);
}

void orderSt(int Ordered, int InStock, float SpecShg)
{
	int 	Ready,
	    	Backorder;

	float	Shipg = 10.0,
	    	TotPric,
	    	TotShipg,
	    	TotOrder;

	cout << "\n\n  The Middletown Wholesale Copper Wire Order Status\n"
	     << "                                                        \n";

	cout << "Number of ordered spools ready to ship from current stock : ";
	if (Ordered > InStock)
	{
		Backorder = Ordered - InStock;
		Ready = InStock;
	    cout << setw(2) << Ready << endl;
		cout << "Number of ordered spools on backorder                     : "
			 << setw(2) << Backorder << endl;
	}
	else 
	{
		Ready = Ordered;
		cout << setw(2) << Ready << endl;
	}

	TotPric = Ready * 100;

	TotShipg = Shipg + SpecShg;

	TotOrder = TotPric + TotShipg;

	cout << fixed << showpoint << setprecision(2);
	cout << "Total selling price of the portion ready to ship: $"
	     << setw(2) << TotPric<< endl;
	cout << "Total shipping and handling on the portion ready to ship: $"
         << setw(2) << TotShipg << endl;
    cout << "Total of the order ready to ship: $"
         << setw(2) << TotOrder << endl;
}

void numInput(string Item, int Limit)
{
	cout << "Error! Invalid number\n";
	cout << Item << " must be greater than " << Limit << ".\n";
}

