/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hector Delgado
 *
 * Created on March 4, 2018, 12:24 PM
 * Purpose: Homework Assignment 1 Gaddis Ch2 Q2
 * Sales Prediction:
 * The East Coast sales division of a company generates 58 percent of total sales. 
 * Based on that percentage, write a program that will predict how much the East Coast 
 * division will generate if the company has $8.6 million in sales this year.
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
    float genProf,
          saleDiv,
          saleCom;

    //Initialize Variables
    saleDiv = 0.58;
    saleCom = 8.6;

    //Process/Map inputs to outputs
    genProf= saleDiv*saleCom;

    //Output data
    cout<<"The East Coast division will generate $"<<genProf<<" million."<<endl;
       
          
            

    //Exit stage right!
    return 0;
}
