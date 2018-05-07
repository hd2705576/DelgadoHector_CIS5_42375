/* 
 * File:   main.cpp
 * Author: Hector Delgado
 * Date: May 6, 2018 11:09pm
 * Purpose: Assignment 5 Menu 
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;


float cRetail()
{
    float Cost,
    Markup;
    
    // Input Validation: only positive values for either the wholesale
    // cost of the item or the percent markup.
    do
    {
        cout << "What is the item's wholesale cost? ";
        cin  >> Cost;
        if (Cost < 0)
        {
            cout << "Error!\n"
            << "Wholesale cost must be a positive number.\n";
        }
    } while (!(Cost > 0));
    do
    {
        cout << "What is the item's markup percentage? ";
        cin  >> Markup;
        if (Markup < 0)
        {
            cout << "Error!\n"
            << "The markup percentage must be a positive number.\n";
        }
    } while (!(Markup > 0));
    
    Markup /= 100;
    return Cost * (1 + Markup);
}


int getAcci(string Region)
{
    int Acciden;
    
    do
    {
        cout << "How many traffic accidents were reported in\nthe "
        << Region << " region during last year? ";
        cin  >> Acciden;
        
        if (Acciden < 0)
        {
            cout << "\nInvalid report!\n"
            << "Accident number must be greater than 0.\n";
        }
        
    } while (!(Acciden > 0));
    cout << endl;
    return Acciden;
}
void findLow(int North, int South, int East, int West, int Central)
{
    int Lowest;
    
    cout << "\nThe fewest reported traffic accidents last year were in\nthe ";
    
    if(North < South   &&
       North < East    &&
       North < West    &&
       North < Central)
    {
        Lowest = North;
        cout << "North ";
    }
    else if(South < North   &&
            South < East    &&
            South < West    &&
            South < Central)
    {
        Lowest = South;
        cout << "South ";
    }
    else if(East < North   &&
            East < South   &&
            East < West    &&
            East < Central)
    {
        Lowest = East;
        cout << "East ";
    }
    else if(West < North   &&
            West < East    &&
            West < South   &&
            West < Central)
    {
        Lowest = West;
        cout << "West ";
    }
    else
    {
        Lowest = Central;
        cout << "Central ";
    }
    
    cout << "region which had " << Lowest << " reported traffic accidents.\n\n";
}


const float GRAVITY = 9.8;
float fallDis(int);
float fallDis(int T)
{
    return .5 * GRAVITY * pow(T, 2);
}


float celsius(int);
float celsius(int F)
{
    
    return (5.0 * (F - 32))/9;
}


float ptValue(float, float, int);
float ptValue(float FValue, float AIRate, int Yrs)
{
    return FValue / pow(1 + AIRate, Yrs);
}


void gtScore(int &);
void calcAvg(int, int, int, int, int);
int  FindLow(int, int, int, int, int);
void gtScore(int &Score)
{
    do
    {
        cout << "Enter a test score: ";
        cin  >> Score;
        
        if (Score < 0 || Score > 100)
        {
            cout << "\nInvaild test score!\n"
            << "Test score must be greater than 0 and less than 100.\n\n";
        }
        
    } while(Score < 0 || Score > 100);
    
}
void calcAvg(int Score1, int Score2, int Score3, int Score4, int Score5)
{
    int Lowest;     // Lowest test score
    float Avg;     // Average of the four highest test scores
    
    // Call function findLowest
    Lowest = FindLow(Score1, Score2, Score3, Score4, Score5);
    
    // Calculate average of four highest test scores
    if (Lowest == Score1)
        Avg = (Score2 + Score3 + Score4 + Score5)/4;
    else if(Lowest == Score2)
        Avg = (Score1 + Score3 + Score4 + Score5)/4;
    else if(Lowest == Score3)
        Avg = (Score2 + Score1 + Score4 + Score5)/4;
    else if(Lowest == Score4)
        Avg = (Score2 + Score3 + Score1 + Score5)/4;
    else
        Avg = (Score2 + Score3 + Score4 + Score1)/4;
    
    // Display average
    cout << "\nThe average of the four highest scores is "
    << Avg << ".\n\n";
}
int FindLow(int Score1, int Score2, int Score3, int Score4, int Score5)
{    // Determine and return lowest test score
    if (Score1 < Score2 && Score1 < Score3 && Score1 < Score4 &&
        Score1 < Score5)
        return Score1;
    else if (Score2 < Score1 && Score2 < Score3 && Score2 < Score4 &&
             Score2 < Score5)
        return Score2;
    else if (Score3 < Score2 && Score3 < Score1 && Score3 < Score4 &&
             Score3 < Score5)
        return Score3;
    else if (Score4 < Score2 && Score4 < Score3 && Score4 < Score1 &&
             Score4 < Score5)
        return Score4;
    else
        return Score5;
}


void JdgData(float &);
float calcSco(float, float, float, float, float);
int fndHigh(float, float, float, float, float);
int fndLow(float, float, float, float, float);
void JdgData(float &Score)
{
    do
    {
        cout << "Enter a judges score: ";
        cin  >> Score;
        
        if (Score < 0 || Score > 10)
        {
            cout << "\nError. Invalid score.\n"
            << "Judges score must be greater than 0 and less than 10.\n";
        }
        
    } while (Score < 0 || Score > 10);
}
float calcSco(float Score1, float Score2, float Score3, float Score4,
                float Score5)
{
    int    High, Low;
    float  Avg;
    High = fndHigh(Score1, Score2, Score3, Score4, Score5);
    Low  = fndLow(Score1, Score2, Score3, Score4, Score5);
    
    if (High == static_cast<int>(Score1))
    {
        if (Low == static_cast<int>(Score2))
            Avg = (Score3 + Score4 + Score5)/3;
        else if (Low == static_cast<int>(Score3))
            Avg = (Score2 + Score4 + Score5)/3;
        else if (Low == static_cast<int>(Score4))
            Avg = (Score3 + Score2 + Score5)/3;
        else
            Avg = (Score2 + Score3 + Score4)/3;
    }
    else if (High == static_cast<int>(Score2))
    {
        if (Low == static_cast<int>(Score1))
            Avg = (Score3 + Score4 + Score5)/3;
        else if (Low == static_cast<int>(Score3))
            Avg = (Score1 + Score4 + Score5)/3;
        else if (Low == static_cast<int>(Score4))
            Avg = (Score3 + Score1 + Score5)/3;
        else
            Avg = (Score1 + Score3 + Score4)/3;
    }
    else if (High == static_cast<int>(Score3))
    {
        if (Low == static_cast<int>(Score2))
            Avg = (Score1 + Score4 + Score5)/3;
        else if (Low == static_cast<int>(Score1))
            Avg = (Score2 + Score4 + Score5)/3;
        else if (Low == static_cast<int>(Score4))
            Avg = (Score1 + Score2 + Score5)/3;
        else
            Avg = (Score2 + Score1 + Score4)/3;
    }
    else if (High == static_cast<int>(Score4))
    {
        if (Low == static_cast<int>(Score2))
            Avg = (Score3 + Score1 + Score5)/3;
        else if (Low == static_cast<int>(Score3))
            Avg = (Score2 + Score1 + Score5)/3;
        else if (Low == static_cast<int>(Score1))
            Avg = (Score3 + Score2 + Score5)/3;
        else
            Avg = (Score2 + Score3 + Score1)/3;
    }
    else
    {
        if (Low == static_cast<int>(Score2))
            Avg = (Score3 + Score4 + Score1)/3;
        else if (Low == static_cast<int>(Score3))
            Avg = (Score2 + Score4 + Score1)/3;
        else if (Low == static_cast<int>(Score4))
            Avg = (Score3 + Score2 + Score1)/3;
        else
            Avg = (Score2 + Score3 + Score4)/3;
    }
    
    return Avg;
}
int fndHigh(float Score1, float Score2, float Score3, float Score4,
                float Score5)
{
    if (Score1 > Score2 && Score1 > Score3 && Score1 > Score4 && Score1 > Score5)
        return Score1;
    else if (Score2 > Score1 && Score2 > Score3 && Score2 > Score4 &&
             Score2 > Score5)
        return Score2;
    else if (Score3 > Score2 && Score3 > Score1 && Score3 > Score4 &&
             Score3 > Score5)
        return Score3;
    else if (Score4 > Score2 && Score4 > Score3 && Score4 > Score1 &&
             Score4 > Score5)
        return Score4;
    else
        return Score5;
}
int fndLow(float Score1, float Score2, float Score3, float Score4,
               float Score5)
{
    if (Score1 < Score2 && Score1 < Score3 && Score1 < Score4 && Score1 < Score5)
        return Score1;
    else if (Score2 < Score1 && Score2 < Score3 && Score2 < Score4 &&
             Score2 < Score5)
        return Score2;
    else if (Score3 < Score2 && Score3 < Score1 && Score3 < Score4 &&
             Score3 < Score5)
        return Score3;
    else if (Score4 < Score2 && Score4 < Score3 && Score4 < Score1 &&
             Score4 < Score5)
        return Score4;
    else
        return Score5;
}


void getData(int &, int &, float &);
void orderSt(int, int , float);
void numInput(string, int);
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
    int     Ready,
    Backorder;
    
    float    Shipg = 10.0,
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
    << setw(2) << TotPric << endl;
    cout << "Total shipping and handling on the portion ready to ship: $"
    << setw(2) << TotShipg << endl;
    cout << "Total of the order ready to ship: $"
    << setw(2) << TotOrder<<endl;
    cout<<"\n"<<endl;
}
void numInput(string Item, int Limit)
{
    cout << "Error! Invalid number\n";
    cout << Item << " must be greater than " << Limit << ".\n";
}

bool isPrime(int);
bool isPrime(int Num)
{
    if (Num > 1)
    {
        for (int i = 2; i <= Num; ++i)
        {
            if (Num % i == 0)
            {
                if(Num == i)
                    return true;
                else
                    return false;
            }
        }
    }
    return false;
}


int main(int argc, char** argv) {
    //Declare Variables
    int oper;
    bool select=true;
    
    //Initialize Loop
    do{
        cout<<"Assignment 5 Problems\n"<<endl;
        cout<<"Enter (1)Problem 1 (2)Problem 2 (3)Problem 3 (4)Problem 4";
        cout<<" (5)Problem 5 (6)Problem 6 (7)Problem 7";
        cout<<" (8)Problem 8 (9)Problem 9"<<endl;
        cin>>oper;
        
        switch(oper){
            case 1:{
                float cRetail();
                    float rPrice;
                    cout << "This program calculates and displays the retail price of an item.\n";
                    rPrice = cRetail();
                    cout << fixed << showpoint << setprecision(2);
                    cout << "The retail price of the item is $" << rPrice <<endl;
                    cout<<"\n"<<endl;
                    break;

            }
            case 2:{
                int North, South, East, West, Central;
                
                cout << "\nThis program determines which region\n"
                << "had the fewest reported traffic accidents.\n"
                << "\n\n";
                // Call function getAcci once for each area.
                North   = getAcci("North");
                South   = getAcci("South");
                East    = getAcci("East");
                West    = getAcci("West");
                Central = getAcci("Central");
                
                // Call function findLowest passing the five
                // accident figures as arguments.
                findLow(North, South, East, West, Central);
                
                break;

            }
            case 3:{
                cout << "\nTable of the distances an object falls due\n"
                << "to gravity in specific time periods.\n\n"
                << "   Time(s)        Distance(m)\n"
                << "                             \n";
                
                for(int T = 1; T <= 10; T++)
                {
                    cout << "    " << setw(3) << T << "           "
                    << fixed << setprecision(0) << setw(4)
                    << fallDis(T) << endl;
                }
                cout << endl;
                break;

            }
                
            case 4:{
                cout << "\nTable of Fahrenheit temperatures 0 - 20\n"
                << "and their Celsius equivalents.\n\n"
                << "\n"
                << "  Fahrenheit       Celsius\n"
                << "                               \n";
                
                for (int F = 0; F <= 20; F++)
                {
                    cout << "      " << setw(2) << F;
                    cout << "          "
                    << setw(3) << celsius(F) << endl;
                }
                cout << endl;
                break;
            }
                
            case 5:{
                float PValue,
                FValue,
                AIRate;
                int          Yrs;
                
                cout << "\n              Present Value Calculator\n"
                << "                                                        \n"
                << "What is the future amount you want in the account? ";
                cin  >> FValue;
                cout << "What is your annual interest rate? ";
                cin  >> AIRate;
                cout << "How many years do you plan to let the money sit in the account? ";
                cin  >> Yrs;
                
                PValue = ptValue(FValue, AIRate, Yrs);
                
                cout << fixed << showpoint << setprecision(2);
                cout << "You need to deposit $" << PValue << " to have a balance of $"
                << FValue << " in " << Yrs << " years.\n\n";
                
                break;

            }
            case 6:{
                int Score1, Score2, Score3, Score4, Score5;
                
                // Display program introduction
                cout << "\nThis program calculates the average of five Scores.\n";
                
                // Call getScore function once for each of the five scores
                gtScore(Score1);
                gtScore(Score2);
                gtScore(Score3);
                gtScore(Score4);
                gtScore(Score5);
                
                // Call calcAverage and pass the five scores
                calcAvg(Score1, Score2, Score3, Score4, Score5);
                
                break;
                
            }
                
            case 7:{
                float Score1, Score2, Score3, Score4, Score5;
                
                // Display introduction
                cout << "\nThis program calculates a performer’s final score.\n"
                << "\n\n";
                
                // Call function getJudgeData once for each judge
                JdgData(Score1);
                JdgData(Score2);
                JdgData(Score3);
                JdgData(Score4);
                JdgData(Score5);
                
                cout << "\nThe contestant’s score is ";
                
                // Call function calcScore passing to it the five scores
                cout << calcSco(Score1, Score2, Score3, Score4, Score5);
                
                cout << "\n"<<endl;
                
                break;
            }
                
            case 8:{
                int Ordered, InStock;
                float SpecShipg;
                
                getData(Ordered, InStock, SpecShipg);
                
                orderSt(Ordered, InStock, SpecShipg);
                
                break;
            }
                
            case 9:{
                int Num;
                
                cout << "This program let you know if the number entered is a "
                << "prime number.\nEnter a number: ";
                cin  >> Num;
                
                cout << "The number " << Num;
                
                if (isPrime(Num))
                {
                    cout << " is a Prime number.\n" << endl;
                }
                else
                    cout << " is not a Prime number.\n" << endl;
                
                break;
            }

            case 10:{
                cout<<" "<<endl;
                cout<<"Exiting Assignment 5"<<endl;
                return 0;
            }
                
            default:{
                cout<<"Please enter a valid response."<<endl;
            }
        }
        
    }while(select==true);
    
    return 0;
}