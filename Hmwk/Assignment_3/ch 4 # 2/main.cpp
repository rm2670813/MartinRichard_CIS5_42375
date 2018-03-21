/* 
 * File:   main.cpp
 * Author: Richard Martin
 * Purpose: Gaddis_7th_4_2_Write a program that asks the user to enter a number
 * within the range of 1 through 10
 * Created on March 20, 2018, 10:44 PM
 */

#include <iostream>
#include <cmath>
using namespace std;


int main() 
{
    int Num1; //number given by user
    
    cout << "Choose a number between 1-10 ";
    cin >> Num1;
    
    
    if (Num1 < 1)
    
        cout << "Invalid number";
    
    else if (Num1==1)
    
        cout << "1 = I";
    
    else if (Num1==2)
    
        cout << "2 = II";
    
    else if (Num1==3)
    
        cout << "3 = III";
    
    else if (Num1==4)
    
        cout << "4 = IV";
    
    else if (Num1==5)
    
        cout << "5 = V";
    
    else if (Num1==6)
    
        cout << "6 = VI";
    
    else if (Num1==7)
    
        cout << "7 = VII";
    
    else if (Num1==8)
    
        cout << "8 = VIII";
    
    else if (Num1==9)
    
        cout << "9 = IX";
    
    else if (Num1==10)
        cout << "10 = X";
    
    else if (Num1>10)
    
        cout << "Invalid Number";
    
    
    return 0;
}

