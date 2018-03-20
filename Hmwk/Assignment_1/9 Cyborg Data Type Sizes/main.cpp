// Gaddis 7th Edition, Question 9
// File:    main.cpp
// Author:  Richard Martin 
// Created on March 1, 2018

// This program determines the size of char, int, float, and double.
#include <iostream>
using namespace std;

int main()
{
    cout << "The size of a character is " << sizeof(char);
    cout << " bytes."<<endl;
    cout << "The size of an integer is " << sizeof(int);
    cout << " bytes."<<endl;
    cout << "The size of a float is " << sizeof(float);
    cout << " bytes."<<endl;
    cout << "The size of a double is " << sizeof(double);
    cout << " bytes."<<endl;
    return 0;
}

