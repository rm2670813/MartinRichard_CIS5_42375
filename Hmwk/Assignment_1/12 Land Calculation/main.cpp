// Gaddis 7th Edition, Question 12
// File:    main.cpp
// Author:  Richard Martin 
// Created on March 1, 2018

// This program calculates and displays the number of acres of land in 389,767
// square feet.
#include <iostream>
using namespace std;

int main ()
{
    int acre, sqfeet, totalAcres;
    acre = 43560;
    sqfeet = 389767;
    totalAcres = sqfeet / acre;
    cout << "There are " << totalAcres << " acres in 389,767 square feet."<<endl;
    return 0;
}

