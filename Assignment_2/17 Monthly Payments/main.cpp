/* 
 * File:   main.cpp
 * Author: Richard Martin
 * Purpose: A program that asks for values and calculates a monthly payment 
 * based on what is entered.
 * Created on March 12, 2018, 12:31 AM
 */
// Gaddis_7th Edition_Ch. 3_Problem 17_This program calculates the monthly 
// payment based on the information entered.

#include <iostream>
using namespace std;

int main()
{
    // Loan amount, monthly interest rate, number of payments, monthly payment, 
    // amount paid back, interest paid.
    double loan, mir, nop, mp, apb, ip;
    cout << "What is your loan amount? ";
    cin >> loan;
    cout << "What is the monthly interest rate? ";
    cin >> mir;
    cout << "How many payments are there? ";
    cin >> nop;
    cout << "What is the monthly payment? ";
    cin >> mp;
    cout << "How much have you paid back? ";
    cin >> apb;
    cout << "How much interest have you paid? ";
    cin >> ip;
    cout << "Loan Amount:                   $ " << loan << endl;
    cout << "Monthly Interest Rate:           " << mir << "%" << endl;
    cout << "Number of Payments:              " << nop << endl;
    cout << "Monthly Payment                $ " << mp << endl;
    cout << "Amount Paid Back               $ " << apb << endl;
    cout << "Interest Paid:                 $ " << ip << endl;
    return 0;
}

