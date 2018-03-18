/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hector Delgado
 *
 * Created on March 4, 2018, 2:32 PM
 * Purpose: Homework Assignment 1 Gaddis Ch2 Q8
 * Total Purchase
 * A customer in a store is purchasing five items. The prices of the five items are 
 * Price of item 1 = $15.95 
 * Price of item 2 = $24.95 
 * Price of item 3 = $6.95 
 * Price of item 4 = $12.95 
 * Price of item 5 = $3.95
 * Write a program that holds the prices of the five items in five variables. 
 * Display each item’s price, the subtotal of the sale, the amount of sales tax, and the total. 
 * Assume the sales tax is 7%.
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
    float itemOne,
          itemTwo,
          itemThree,
          itemFour,
          itemFive,
          subtotal,//sum of costs of the five items
          tax,//tax on sum
          total;//subtotal and tax

    //Initialize Variables
    itemOne =15.95,
    itemTwo =24.95,
    itemThree =6.95,
    itemFour =12.95,
    itemFive =3.95;

    //Process/Map inputs to outputs
    subtotal = itemOne + itemTwo + itemThree + itemFour + itemFive;
    tax = 0.07 * subtotal;
    total = tax + subtotal;

    //Output data
    cout << "Price of item 1 = $" << itemOne << endl;
    cout << "Price of item 2 = $" << itemTwo << endl;
    cout << "Price of item 3 = $" << itemThree << endl;
    cout << "Price of item 4 = $" << itemFour << endl;
    cout << "Price of item 5 = $" << itemFive << endl;
    cout << "Subtotal of the sale = $" << subtotal << endl;
    cout << "Amount of Sales Tax = $" << tax << endl;
    cout << "Total = $" << total << endl;

    //Exit stage right!
    return 0;
}
