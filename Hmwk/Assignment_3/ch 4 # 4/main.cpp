/* 
 * File:   main.cpp
 * Author: Richard Martin
 * Purpose: Gaddis_7th_4_4_Write a program that asks for the length and width
 * of two rectangles.
 * Created on March 20, 2018, 10:58 PM
 */

#include <iostream>
#include <cmath>
using namespace std;


int main() 
{
    double lenOne, widOne, areaOne, lenTwo, widTwo, areaTwo;
       
    cout << "Enter the length of the first rectangle: ";
    cin >> lenOne;
    cout << "Enter the width of the first rectangle: ";
    cin >> widOne;
    cout << "Enter the length of the second rectangle: ";
    cin >> lenTwo;
    cout << "Enter the width of the second rectangle: ";
    cin >> widTwo;
    areaOne = lenOne * widOne;
    cout << "Area 1 = " << areaOne << "." << endl;
    areaTwo = lenTwo * widTwo;
    cout << "Area 2 = " << areaTwo << "." << endl;
    if (areaOne < areaTwo)
        cout << "Rectangle one is smaller than rectangle two.";
    else if (areaOne == areaTwo)
        cout << "Rectangle one is equal to rectangle two.";
    else
        cout << "Rectangle one is larger than rectangle two" << endl;
    return 0;
            
    
            
            
    
    return 0;
}

