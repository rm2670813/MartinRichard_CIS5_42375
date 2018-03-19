/* 
 * File:   main.cpp
 * Author: Richard Martin
 * Created on March 10, 2018, 8:52 PM
 * Purpose: A program that converts Celsius to Fahrenheit.
 */
//  Gaddis_7th Edition_Ch. 3_Problem 10_This program will convert the Celsius
//  temperature entered by the user into a Fahrenheit tempreature.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Celsius, Fahrenheit, and Fahrenheit equation.
    double Celsius, Fahrenheit;

    cout << "What is the current temperature in Celsius? ";
    cin >> Celsius;
    Fahrenheit = 1.8 * Celsius + 32; // I used 1.8 instead of 9/5 because it was coming back with a wrong answer.
    cout << "The temperature is " << Fahrenheit << " degrees F"<<endl;
    return 0;
}

