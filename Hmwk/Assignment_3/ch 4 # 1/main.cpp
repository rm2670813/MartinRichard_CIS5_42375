/* 
 * File:   main.cpp
 * Author: Richard Martin
 * Purpose: Gaddis_7th_4_1_Write a program that asks the user to enter two 
 * numbers. The program should use the conditional operator to determine which
 * number is the smaller and which is the larger.
 * Created on March 19, 2018, 9:15 PM
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int firstNum;        // First number 
    int secondNum;       // Second number 
    cout << "Enter your first number. ";
    cin >> firstNum;
    cout << "Enter your second number. ";
    cin >> secondNum;
    if (firstNum > secondNum)
        cout << "" << firstNum << " > " << secondNum;
    else if (secondNum > firstNum)
        cout << "" << secondNum << " > " << firstNum;
    return 0;
}

