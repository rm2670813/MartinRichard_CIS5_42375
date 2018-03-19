/* 
 * File:   main.cpp
 * Author: Richard Martin
 * Created on March 10, 2018, 8:02 PM
 * Purpose:  Create a program that calculates how many calories have been 
 * consumed.
 */
//  Gaddis_7th Edition_Ch. 3_Problem 7_This program will calculate how many 
//  calories a person consumed based on how many cookies they ate. One serving, 
//  or 4 cookies, equals 300 calories, which calculates to 75 calories per
//  cookie.

#include <iostream>
using namespace std;

int main()
{
    int cookies, calories;
    
    cout << "This program calculates how many calories you have consumed based"
            "on how many cookies you ate."<<endl;
    cout << "How many cookies did you eat? ";
    cin >> cookies;
    calories = cookies * 75;
    cout << "You consumed " << calories << " calories."<<endl;
    return 0;
}

