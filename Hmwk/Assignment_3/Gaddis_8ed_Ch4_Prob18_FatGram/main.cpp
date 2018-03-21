/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Date: 
 * Purpose:  
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
    double calories, gramsFat, calsFat;
    double lowfat;

    //Initialize Variables
    cout << "Enter the number of total calories in food: ";
    cin >> calories;

    //Process/Map inputs to outputs
     if(calories < 0)
    {
    cout << "\nCalories cannot be less than 0.\n"
    << "Enter calories again: ";
    }
    cout << "\nEnter the number of grams of fat: ";
        cin >> gramsFat;
    if(gramsFat < 0 || gramsFat > calories)
    {
    cout << "\nFat grams cannot be less than 0 or greater than the total amount of calories!! \n"
    << "Enter gramsFat again: ";
    }

    calsFat = gramsFat * 9;
    lowfat = calsFat/calories;
    
    //Output data
     cout << "Calories from fat: "<<lowfat*100<<"%"<< "\n";
    if(lowfat < 0.30)
        cout << "This food is low in fat.\n";

    //Exit stage right!
    return 0;
}

