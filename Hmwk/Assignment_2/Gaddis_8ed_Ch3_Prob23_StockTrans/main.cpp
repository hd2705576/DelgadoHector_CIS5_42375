/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Purpose: Gaddis 8ed Chapter 3 Problem 23 Stock Transaction Program
 * Last month Joe purchased some stock in Acme Software, Inc. Here are the details of the purchase:
 * • The number of shares that Joe purchased was 1,000.
 * • When Joe purchased the stock, he paid $45.50 per share.
 * • Joe paid his stockbroker a commission that amounted to 2% of the amount he paid
 * Programming Challenges 147 Two weeks later Joe sold the stock. Here are the details of the sale:
 * • The number of shares that Joe sold was 1,000.
 * • He sold the stock for $56.90 per share.
 * • He paid his stockbroker another commission that amounted to 2% of the amount he received for the stock.
 * Write a program that displays the following information:
 *
 * Created on March 12, 2018, 5:17 PM
 */

//System Libraries
#include <iostream>
#include<iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    double sharesBought, stockPrice1, commission1, sharesSold, stockPrice2, commission2;
    double total1, total2;

    //Initialize Variables
     sharesBought = 1000;
     sharesSold = 1000;
     stockPrice1 = 45.50;
     stockPrice2 = 56.90;

    //Process/Map inputs to outputs
     commission1 = (sharesBought * stockPrice1) * 0.02;
     commission2 = (sharesSold * stockPrice2) * 0.02;
     total1 = (sharesBought * stockPrice1) + commission1;
     total2 = (sharesSold * stockPrice2) + commission2;

    //Output data
     cout<< setprecision(2)<<fixed;
     cout<< "Amount paid for the stock: $"<<sharesBought * stockPrice1<<endl;
     cout<< "Commission paid to broker : $"<< commission1;
     cout<< "\n";
     cout<< "The stock sold for: $"<<sharesSold * stockPrice2<<endl;
     cout<< "Commission paid to broker : $"<<commission2<< endl;
     cout<< "Profit: $" << total2 - total1<< "\n\n";

    //Exit stage right!
    return 0;
}
