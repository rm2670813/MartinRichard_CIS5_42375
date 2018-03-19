// Gaddis 7th Edition, Question 5
// File:    main.cpp
// Author:  Richard Martin 
// Created on March 1, 2018

// This program adds 5 numbers then displays their average.
#include <iostream>
using namespace std;

int main ()
{
    int a, b, c, d, e, sum, average;
    a = 28;
    b = 32;
    c = 37;
    d = 24;
    e = 33;
    sum = a + b + c + d + e;
    average = sum / 5;
    
    cout << "Sum " << sum << endl;
    cout << "Average " << average << endl;
    return 0;
}
