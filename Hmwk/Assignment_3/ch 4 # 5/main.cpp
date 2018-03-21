/* 
 * File:   main.cpp
 * Author: Richard Martin
 * Purpose: Gaddis_7th_4_5_Write a program that calculates and displays a 
 * person's BMI.
 * Created on March 20, 2018, 11:14 PM
 */

#include <iostream>
#include <cmath>
using namespace std;


int main() 
{
    float Weight; //weight of the person
    float Height; //Height of the person
    float BMI; //BMI of the individual
    
    cout << "What is your weight? ";
    cin >> Weight;
    
    cout << "What is your height in inches? ";
    cin >> Height;
    
    BMI = (Weight*703) / (Height*Height);
    
    cout << "Your BMI is " <<BMI << endl; 
    
    if (BMI == 18.5 - 25)
    cout << "You are in a healthy range";
    else if (BMI>25)
    cout << "You are considered overweight";
    else if (BMI<18)
    cout << "You are considered underwieght";
    

    
    return 0;
}
