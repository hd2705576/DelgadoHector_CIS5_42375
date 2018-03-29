/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Date: March 20, 2018 11:58 am
 * 
 * Purpose: Gaddis 8ed Chapter 4 Problem 19 Spectral Analysis
 * If a scientist knows the wavelength of an electromagnetic wave, he or she can 
 * determine what type of radiation it is. Write a program that asks for the wavelength 
 * of an electromagnetic wave in meters and then displays what that wave is according 
 * to the chart below. (For example, a wave with a wavelength of 1E-10 meters would be an
 * X-ray.)
 * 1×10–2 **** 1×10–3 **** 7×10–7 **** 4×10–7 **** 1×10–8 **** 1×10–11
 * Radio Waves   *Microwaves  *Infrared  *Visible Light   *Ultraviolet  *X-Rays  *Gamma Rays
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
    //Declare Variables   ****changed from double to float; also deleted an extra variable that I never used.
    float waveLnt; //Wave length in scientific notation (m)

    //Initialize Variables
    cout << "Enter the wavelength in meters using scientific notation: ";
	cin  >> waveLnt;

    //Process/Map inputs to outputs
    cout<<"A "<<waveLnt<<" meter wavelength is ";
    if(waveLnt <= 1E-11)
	cout<<"a gamma ray.\n";
    else if (waveLnt <= 1E-8)
	cout<<"an x-ray.\n";
    else if (waveLnt <= 4E-7)
	cout<<"an ultaviolet wave.\n";
    else if (waveLnt <= 7E-7)
	cout<<"a visible light wave.\n";
    else if (waveLnt <= 1E-3)
	cout<<" an infrared wave.\n";
    else if (waveLnt <= 1E-2)
	cout<<"a microwaves.\n";
	else
	cout<<"a radio wave\n";

    //Output data

    //Exit stage right!
    return 0;
}

