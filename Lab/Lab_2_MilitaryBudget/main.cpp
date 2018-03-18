/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Hector Delgado
 *
 * Created on February 25, 2018, 9:58 PM
 */

#include <iostream>
using namespace std;

const float TRLLN=1.0e12f;
const float BLLN=1.0e09f;
const float PRCNT=100;

int main(int argc, char** argv){
    float milBdgt,
          fedBdgt,
          pcntMil;
    
    milBdgt=639*BLLN;
    fedBdgt=4.1*TRLLN;
    
    pcntMil=milBdgt/fedBdgt*PRCNT;
    
    cout<<"Military Budget = $"<<milBdgt/BLLN<<" Billion"<<endl;
    cout<<"Federal Budget = $"<<fedBdgt/TRLLN<<" Trillion"<<endl;
    cout<<"Military Percentage = "<<pcntMil<<"%"<<endl;
    
    return 0;
}

