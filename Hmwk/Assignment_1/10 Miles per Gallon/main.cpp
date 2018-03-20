// Gaddis 7th Edition, Question 10
// File:    main.cpp
// Author:  Richard Martin 
// Created on March 1, 2018

// This program calculates and displays the miles per gallon a car can get.
#include <iostream>
using namespace std;

int main()
{
    int milesDriven, gallonsUsed, MPG;
    milesDriven = 350;
    gallonsUsed = 12;
    MPG = milesDriven / gallonsUsed;
    cout << "A car with a 12 gallon tank that can travel 350 miles before "
            "refueling can get " << MPG << " miles per gallon."<<endl;
            
    
    return 0;
}

