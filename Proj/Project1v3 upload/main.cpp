//
//  main.cpp
//  Project1v3
//
//  Created by Hector Delgado on 4/19/18 3:48 PM
//  Copyright © 2018 Hector Delgado. All rights reserved.
//

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random number library
#include <ctime>     //Time library
#include <cmath>     //Math Library
#include <string.h>  //String Library
#include <iomanip>   //Input Output Manipulation
#include <fstream>   //File Input-Output

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv){
    ofstream OutputFile;            // Define ofstream object
    
    //Declare variables
    const int SIZE=7; //Reminder thar all variables must be 7 or less characters
    string plyr;
    string name=plyr; //Name of player, will be used to print out to txt file
    int value1;  //If card 1 is an Ace, value is either 1 or 11, up to user to decide
    int value2;  //If card 2 is an Ace, value is either 1 or 11, up to user to decide
    int value3;  //Pos Value of card 3 = 1 or 11 or 0
    int value4;  //Pos Value of card 4 = 1 or 11 or 0
    int value5;  //Pos Value of card 5 = 1 or 11 or 0
    int value6;  //Pos Value of card 6 = 1 or 11 or 0
    int value7;  //Pos Value of card 7 = 1 or 11 or 0
    unsigned int sum1;  //Player Sum of card values, would like to have card values printed out
    unsigned int sum2;  //Dealer Sum
    int worth21; //If card 1=2; its worth=2, none drawn worth=0
    int worth22; //If card 2=2; its worth=2, none drawn worth=0
    int worth23; //Worth of card 3 = 2 or 0
    int worth24; //Worth of card 4 = 2 or 0
    int worth25; //Worth of card 5 = 2 or 0
    int worth26; //Worth of card 6 = 2 or 0
    int worth27; //Worth of card 7 = 2 or 0
    int worth31; //If Card 1=3; worth=3, none drawn worth=0
    int worth32; //If card 2=3; worth=3, none drawn worth=0
    int worth33; //Worth of card 3 = 3 or 0
    int worth34; //Worth of card 4 = 3 or 0
    int worth35; //Worth of card 5 = 3 or 0
    int worth36; //Worth of card 6 = 3 or 0
    int worth37; //Worth of card 7 = 3 or 0
    int worth41; //If Card 1=4; worth=4, none drawn worth=0
    int worth42; //If card 2=4; worth=4, none drawn worth=0
    int worth43; //Worth of card 3 = 4 or 0
    int worth44; //Worth of card 4 = 4 or 0
    int worth45; //Worth of card 5 = 4 or 0
    int worth46; //Worth of card 6 = 4 or 0
    int worth47; //Worth of card 7 = 4 or 0
    int worth51; //If Card 1=5; worth=5, none drawn worth=0
    int worth52; //If card 2=5; worth=5, none drawn worth=0
    int worth53; //Worth of card 3 = 5 or 0
    int worth54; //Worth of card 4 = 5 or 0
    int worth55; //Worth of card 5 = 5 or 0
    int worth56; //Worth of card 6 = 5 or 0
    int worth57; //Worth of card 7 = 5 or 0
    int worth61; //If Card 1=6; worth=6, none drawn worth=0
    int worth62; //If card 2=6; worth=6, none drawn worth=0
    int worth63; //Worth of card 3 = 6 or 0
    int worth64; //Worth of card 4 = 6 or 0
    int worth65; //Worth of card 5 = 6 or 0
    int worth66; //Worth of card 6 = 6 or 0
    int worth67; //Worth of card 7 = 6 or 0
    int worth71; //If Card 1=7; worth=7, none drawn worth=0
    int worth72; //If card 2=7; worth=7, none drawn worth=0
    int worth73; //Worth of card 3 = 7 or 0
    int worth74; //Worth of card 4 = 7 or 0
    int worth75; //Worth of card 5 = 7 or 0
    int worth76; //Worth of card 6 = 7 or 0
    int worth77; //Worth of card 7 = 7 or 0
    int worth81; //If Card 1=8; worth=8, none drawn worth=0
    int worth82; //If card 2=8; worth=8, none drawn worth=0
    int worth83; //Worth of card 3 = 8 or 0
    int worth84; //Worth of card 4 = 8 or 0
    int worth85; //Worth of card 5 = 8 or 0
    int worth86; //Worth of card 6 = 8 or 0
    int worth87; //Worth of card 7 = 8 or 0
    int worth91; //If Card 1=9; worth=9, none drawn worth=0
    int worth92; //If card 2=9; worth=9, none drawn worth=0
    int worth93; //Worth of card 3 = 9 or 0
    int worth94; //Worth of card 4 = 9 or 0
    int worth95; //Worth of card 5 = 9 or 0
    int worth96; //Worth of card 6 = 9 or 0
    int worth97; //Worth of card 7 = 9 or 0
    int worthT1; //From this point on, if Card 1=10; worth=10, none drawn worth=0
    int worthT2; //If card 2=10; worth=10, none drawn worth=0
    int worthT3; //Worth of card 3 = 10 or 0
    int worthT4; //Worth of card 4 = 10 or 0
    int worthT5; //Worth of card 5 = 10 or 0
    int worthT6; //Worth of card 6 = 10 or 0
    int worthT7; //Worth of card 7 = 10 or 0
    int worthJ1; //If Card 1=J; worth=10, none drawn worth=0
    int worthJ2; //If card 2=J; worth=10, none drawn worth=0
    int worthJ3; //Worth of card 3 = 10 or 0
    int worthJ4; //Worth of card 4 = 10 or 0
    int worthJ5; //Worth of card 5 = 10 or 0
    int worthJ6; //Worth of card 6 = 10 or 0
    int worthJ7; //Worth of card 7 = 10 or 0
    int worthQ1; //If Card 1=Q; worth=10, none drawn worth=0
    int worthQ2; //If card 2=Q; worth=10, none drawn worth=0
    int worthQ3; //Worth of card 3 = 10 or 0
    int worthQ4; //Worth of card 4 = 10 or 0
    int worthQ5; //Worth of card 5 = 10 or 0
    int worthQ6; //Worth of card 6 = 10 or 0
    int worthQ7; //Worth of card 7 = 10 or 0
    int worthK1; //If Card 1=K; worth=10, none drawn worth=0
    int worthK2; //If card 2=K; worth=10, none drawn worth=0
    int worthK3; //Worth of card 3 = 10 or 0
    int worthK4; //Worth of card 4 = 10 or 0
    int worthK5; //Worth of card 5 = 10 or 0
    int worthK6; //Worth of card 6 = 10 or 0
    int worthK7; //Worth of card 7 = 10 or 0
    char hitMe = '\0';  //Option for 3rd card
    char hitMe2 = '\0'; //Option for 4th card
    bool play = true; //Keeps game running, unless players wants to quit game
    float bets; //Bet per round, must be less than pot
    float pot; //Total money set aside for bets, can be cashed out
    char nextRnd; //The option to play another round
    int a[3]={0,0,0};
    
    
    cout<<"Black Jack"<<endl;
    cout<<"Card Layout: "; //Ideally set up to use in FUTURE to print card values out
    cout<<"D for Diamonds, S for Spades,C for Clubs,H for Hearts"<<endl; //""
    cout<<"T=10 J-Jack Q-Queen K-King A-Ace"<<endl; //""
    cout<<endl;
    cout<<"Enter Username: "; //Look into method to add up wins etc. after diff player takes turn
    cin>>plyr;
    cout<<endl;
    cout<<"Enter amount for your BlackJack pot to place bets from: $";
    cin>>pot;
    cout<<endl;
    
    do{
        srand(static_cast<unsigned int>(time(0))); //Error in Netbeans due to security
        //Says that it is a weak random number generator, find way to disable or use different generator
        
        char card1=rand()%52+1; //One of the two initial cards for player
        char card2=rand()%52+1; //One of the two initial cards for player
        char card3=rand()%52+1; //Possible extra card for player
        char card4=rand()%52+1; //Possible extra card for player
        char card5=rand()%52+1; //Card 1 dealt for Dealer
        char card6=rand()%52+1; //Card 2 dealt for Dealer
        char card7=rand()%52+1; //Card 3 dealt for Dealer
        
        card1|=card2;
        card2|=card3;
        card3|=card4;
        card4|=card5;
        card5|=card6;
        card6|=card7;
        
        cout<<"Enter bet amount for this round: $";
        cin>>bets;
        cout<<endl;
        for(int j=pot;j<bets;){
            cout<<"Bet amount exceeds amount set aside to place bets from."<<setw(4)
            <<" Enter bet amount again: $";
            cin>>bets;
            cout<<endl;
            while(bets>pot){
                cout<<"Bet amount exceeds amount set aside to place bets from.";
                cout<<" Enter bet amount again: $";
                cin>>bets;
                cout<<endl;
            }
        }
        
        
        if(card1==1 || card1==14 || card1==27 || card1==40){
            cout<<endl;
            cout<<"Ace can be 1 or 11."<<endl;
            cin>>value1;
            while(value1!=1&&value1!=11){
                cout<<"Enter 1 or 11"<<endl;
                cin>>value1;
                cout<<endl;
            }
        }
        else{
            value1=0;
        }
        if(card2==1 || card2==14 || card2==27 || card2==40){
            cout<<endl;
            cout<<"Ace can be 1 or 11. "<<endl;
            cin>>value2;
            while(value2!=1 && value2!=11){
                cout<<"Enter 1 or 11"<<endl;
                cin>>value2;
                cout<<endl;
            }
        }
        else{
            value2=0;
        }
        
        if(card1==2 || card1==15 || card1==28 || card1==41){
            worth21=2;
        }
        else{
            worth21=0;
        }
        if(card2==2 || card2==15 || card2==28 || card2==41){
            worth22=2;
        }
        else{
            worth22=0;
        }
        
        if(card1==3 || card1==16 || card1==29 || card1==42){
            worth31=3;
        }
        else{
            worth31=0;
        }
        
        if(card2==3 || card2==16 || card2==29 || card2==42){
            worth32=3;
        }
        else{
            worth32=0;
        }
        
        if(card1==4 || card1==17 || card1==30 || card1==43){
            worth41=4;
        }
        else{
            worth41=0;
        }
        
        if(card2==4 || card2==17 || card2==30 || card2==43){
            worth42=4;
        }
        else{
            worth42=0;
        }
        
        if(card1==5 || card1==18 || card1==31 || card1==44){
            worth51=5;
        }
        else{
            worth51=0;
        }
        
        if(card2==5 || card2==18 || card2==31 || card2==44){
            worth52=5;
        }
        else{
            worth52=0;
        }
        
        if(card1==6 || card1==19 || card1==32 || card1==45){
            worth61=6;
        }
        else{
            worth61=0;
        }
        
        if(card2==6 || card2==19 || card2==32 || card2==45){
            worth62=6;
        }
        else{
            worth62=0;
        }
        
        if(card1==7 || card1==20 || card1==33 || card1==46){
            worth71=7;
        }
        else{
            worth71=0;
        }
        
        if(card2==7 || card2==20 || card2==33 || card2==46){
            worth72=7;
        }
        else{
            worth72=0;
        }
        
        if(card1==8 || card1==21 || card1==34 || card1==47){
            worth81=8;
        }
        else{
            worth81=0;
        }
        
        if(card2==8 || card2==21 || card2==34 || card2==47){
            worth82=8;
        }
        else{
            worth82=0;
        }
        
        if(card1==9 || card1==22 || card1==35 || card1==48){
            worth91=9;
        }
        else{
            worth91=0;
        }
        
        if(card2==9 || card2==22 || card2==35 || card2==48){
            worth92=9;
        }
        else{
            worth92=0;
        }
        
        if(card1==10 || card1==23 || card1==36 || card1==49){
            worthT1=10;
        }
        else{
            worthT1=0;
        }
        
        if(card2==10 || card2==23 || card2==36 || card2==49){
            worthT2=10;
        }
        else{
            worthT2=0;
        }
        
        if(card1==11 || card1==24 || card1==37 || card1==50){
            worthJ1=10;
        }
        else{
            worthJ1=0;
        }
        
        if(card2==11 || card2==24 || card2==37 || card2==50){
            worthJ2=10;
        }
        else{
            worthJ2=0;
        }
        
        if(card1==12 || card1==25 || card1==38 || card1==51){
            worthQ1=10;
        }
        else{
            worthQ1=0;
        }
        
        if(card2==12 || card2==25 || card2==38 || card2==51){
            worthQ2=10;
        }
        else{
            worthQ2=0;
        }
        
        
        if(card1==13 || card1==26 || card1==39 || card1==52){
            worthK1=10;
        }
        else{
            worthK1=0;
        }
        
        if(card2==13 || card2==26 || card2==39 || card2==52){
            worthK2=10;
        }
        else{
            worthK2=0;
        }
        
        //The sum is the worth of two cards drawn, rest are 0
        sum1=value1+value2+worth21+worth22+worth31+worth32+worth41+worth42+worth51
        +worth52+worth61+worth62+worth71+worth72+worth81+worth82+worth91+worth92+
        worthT1+worthT2+worthJ1+worthJ2+worthQ1+worthQ2+worthK1+worthK2;
        cout<<"Sum: "<<sum1<<endl;
        cout<<endl;

