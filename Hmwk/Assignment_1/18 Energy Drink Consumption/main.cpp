// Gaddis 7th Edition, Question 18
// File:    main.cpp
// Author:  Richard Martin 
// Created on March 1, 2018

// This program calculates the percentage of survey takers that drink energy 
// drinks and calculates what percentage of those drink citrus flavored energy
// drinks.
#include <iostream>
using namespace std;
int main()
{
    // Variables to hold number of survey takers, the amount that purchase
    // energy drinks, prefer citrus flavored drinks.
    double totalSurveyed = 12467, energy, citrus;
    // Calculate and display 14% of those that purchase one or more energy 
    // drinks per week.
    energy = totalSurveyed * 0.14;
    cout << "Of the 12467 people surveyed, 14% or " << energy << ", purchase" 
            " one or more energy drinks per week."<<endl;
    // Calculate the 64% of that 14% that prefer citrus flavored energy drinks.
    citrus = energy * 0.64;
    cout << "Of that 14%, 64% or " << citrus << ", prefer citrus flavored"
            " drinks."<<endl;
    
    return 0;
    
}

