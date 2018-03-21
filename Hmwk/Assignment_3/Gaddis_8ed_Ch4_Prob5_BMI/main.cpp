/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Date: March 19, 2018 9:25 am
 * 
 * Purpose: Gaddis 8ed Chapter 4 Problem 5 Body Mass Index
 * Write a program that calculates and displays a person’s body mass index (BMI). 
 * The BMI is often used to determine whether a person with a sedentary lifestyle 
 * is overweight or underweight for his or her height. A person’s BMI is calculated 
 * with the following formula:
 * BMI = weight * 703/height^2
 * where weight is measured in pounds and height is measured in inches. The program 
 * should display a message indicating whether the person has optimal weight, is 
 * underweight, or is overweight. A sedentary person’s weight is considered to be 
 * optimal if his or her BMI is between 18.5 and 25. If the BMI is less than 18.5, 
 * the person is considered to be underweight. If the BMI value is greater than 25, 
 * the person is considered to be overweight.
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
    double weight,
           height,
           BMI;

    //Initialize Variables
    cout<<"Enter your weight (in pounds): ";
        cin>>weight;
    cout<<"\nEnter your height (in inches): ";
        cin>>height;

    //Process/Map inputs to outputs
    BMI = ( weight * 703 )/( height * height ); 

    //Output data
    if(BMI < 18.5)
        cout<<"\nYou are underweight.\n";
    if(BMI>18.5 && BMI<25)
        cout<<"\nYou are at an optimal weight.\n";
    if(BMI>25)
        cout<<"\nYou are considered to be overweight.\n";
            

    //Exit stage right!
    return 0;
}

