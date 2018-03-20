
/* 
 * File:   main.cpp
 * Author: Richard Martin
 * Created on March 10, 2018, 8:02 PM
 * Purpose:  Create a program that calculates a cars gas mileage.
 */
//  Gaddis_7th Edition_Ch. 3_Problem 1_This is a program that calculates a car's
//  gas mileage based on what the user enters for number of gallons the car can
//  hold and the number of miles it can drive on a full tank.

#include <iostream>
using namespace std;

int main()
{
    // The number of gallons the car can hold and the number of miles it can 
    // drive on a full tank of gas as entered by the user. The miles per gallon
    // will be displayed depending on what the user enters.
    double gallons, miles, mpg;
    
    cout << "How many gallons can the gas tank hold? ";
    cin >> gallons;
    cout << "How many miles can it drive on a full tank of gas? ";
    cin >> miles;
    mpg = miles / gallons;
    cout << "Your car gets " << mpg << " miles per gallon."<<endl;
    return 0;
}

