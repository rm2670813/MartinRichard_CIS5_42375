/* 
 * File:   main.cpp
 * Author: Richard Martin
 * Purpose: Gaddis_7th_4_6_Write a program that calculates and displays an 
 * objects mass based on the information entered by the user.
 * Created on March 20, 2018, 11:20 PM
 */

#include <iostream>
#include <cmath>
using namespace std;


int main() 
{
    float mass; //The objects mass
    float weight; //the objects weight
    
    
    
    cout << "What is the mass of the object? ";
    cin >> mass;
    weight = mass * 9.8;
    cout << "The weight of the object: " << weight << "newtons";
    if (mass <= 10)
    cout << "This object is too small";
    else if (mass >= 1000)
    cout << "This object is too large" << endl;

              
    
    return 0;
}
