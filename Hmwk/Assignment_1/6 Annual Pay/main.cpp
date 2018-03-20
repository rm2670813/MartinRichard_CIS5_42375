// Gaddis 7th Edition, Question 6
// File:    main.cpp
// Author:  Richard Martin 
// Created on March 1, 2018

// This program calculates and displays the annual pay of an employee.
#include <iostream>
using namespace std;

int main ()
{
    int payAmount, payPeriods, annualPay;
    payAmount = 1700.0;
    payPeriods = 26;
    annualPay = payAmount * payPeriods;
    
    cout << "Annual Pay: $" << annualPay << endl;
    return 0;
}

