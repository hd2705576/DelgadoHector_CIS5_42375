/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hector Delgado
 *
 * Created on February 24, 2018, 1:06 PM
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns
const float PERCENT=100;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables...
    float   pmPrice,
            basePrc,
            fedTax,
            stateTx,
            salesTx,
            totTax,
            prctPrf,
            oilProf,
            prctTax;
    //Initial Variables
    pmPrice=3.79f;
    fedTax=0.184f;
    stateTx=0.417f;
    salesTx=0.0225f;
    prctPrf=0.065f;
    
    //Map/Process Inputs to Outputs
    basePrc=(pmPrice-fedTax-stateTx)/(1+salesTx);
    totTax=pmPrice-basePrc;
    prctTax=totTax/basePrc*PERCENT;
    oilProf=basePrc*prctPrf*PERCENT;
    
    //Display Outputs
    cout<<"Pump Price = $"<<pmPrice<<"/gallon"<<endl;
    cout<<"Federal Excise Tax = $"<<fedTax<<"/gallon"<<endl;
    cout<<"State Excise Tax = $"<<stateTx<<"/gallon"<<endl;
    cout<<"State Sales Tax = "<<salesTx*PERCENT<<"%"<<endl; 
    cout<<"The base price for a gallon of gas = $"<<basePrc<<"/gallon"<<endl;
    cout<<"The total tax on a gallon of gas = $"<<totTax<<"/gallon"<<endl;
    cout<<"Percentage price due to gas tax = "<<prctTax<<"%"<<endl;
    cout<<"Oil Company profit range = 7 cents to "<<oilProf<<" cents/gallon"<<endl;
    
    //Exit Program!
    return 0;
}
