// Gaddis 7th Edition, Question 11
// File:    main.cpp
// Author:  Richard Martin 
// Created on March 1, 2018

// This program calculates and displays the distance a car can travel on one
// tank of gas when driven in town and when driven on the highway.
#include <iostream>
using namespace std;

int main()
{
    int distanceTown, distanceHighway, gallons, townMPG, highwayMPG;
    gallons = 20;
    townMPG = 21.5;
    highwayMPG = 26.8;
    distanceTown = gallons * 21.5;
    distanceHighway = gallons * 26.8;
    
    cout << "A car with a 20 gallon tank and an average MPG of 21.5 Town, 26.8"
            " Highway will travel " << distanceTown << " miles in town and "
            << distanceHighway << " miles on the highway on one tank of gas."<<endl;
          
    
    return 0;
}

