/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Date: March 20, 2018 7:39 am
 * 
 * Purpose: Gaddis 8ed Chapter 4 Problem 13 Book Club Points
 * Serendipity Booksellers has a book club that awards points to its customers based 
 * on the number of books purchased each month. The points are awarded as follows:
 * • If a customer purchases 0 books, he or she earns 0 points.
 * • If a customer purchases 1 book, he or she earns 5 points.
 * • If a customer purchases 2 books, he or she earns 15 points.
 * • If a customer purchases 3 books, he or she earns 30 points.
 * • If a customer purchases 4 or more books, he or she earns 60 points.
 * Write a program that asks the user to enter the number of books that he or she has 
 * purchased this month and then displays the number of points awarded.
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
    int books,
        points;

    //Initialize Variables
    cout<<"Enter the number of books purchased this month: ";
    cin>>books;

    //Process/Map inputs to outputs

    //Output data
     if(books == 0)
     {
         points = 0;
         cout<<"\nYou have earned: "<<points<<" points.\n";
     }
    if(books == 1)
    {
        points = 5;
        cout<<"\nYou have earned: "<<points<<" points.\n";
    }
    if(books == 2)
    {
        points = 15;
        cout<<"\nYou have earned: "<<points<<" points.\n";
    }
    if(books == 3)
    {
        points = 30;
        cout<<"\nYou have earned: "<<points<<" points.\n";
    }
    if(books >= 4)
    {
        points = 60;
        cout<<"\nYou have earned: "<<points<<" points.\n";
    }
    else
    {
        if(books < 0)
            cout<<"\nNumber of books cannot be negative.\n";
    }

    //Exit stage right!
    return 0;
}

