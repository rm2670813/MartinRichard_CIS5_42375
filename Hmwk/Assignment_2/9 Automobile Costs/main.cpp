/* 
 * File:   main.cpp
 * Author: Richard Martin
 * Purpose: Asks the user to enter the monthly costs for the following expenses
 * incurred from operating his or her automobile: loan payment, insurance, gas,
 * oil, tires, and maintenance. The program should then display the total 
 * monthly cost of these expenses, and the total annual cost of these expenses.
 * Created on March 12, 2018, 12:15 AM
 */
// Gaddis_7th Edition_Ch. 3_Problem 9_This program calculates the ownership
// costs of an automobile based on the information entered.

#include <iostream>
using namespace std;

int main()
{
    // Expenses entered by the user are loan payment, insurance, gas, oil,
    // tires, and maintenance. The monthly and annual costs are also here.
    double loan, ins, gas, oil, tire, main, month, annual;
    cout << "What is your loan payment? ";
    cin >> loan;
    cout << "What is your monthly cost for insurance? ";
    cin >> ins;
    cout << "How much do you spend on gas every month? ";
    cin >> gas;
    cout << "How much do you spend on oil every month? ";
    cin >> oil;
    cout << "How much do you spend on tires every month? ";
    cin >> tire;
    cout << "How much do you spend on maintenance every month? ";
    cin >> main;
    month = loan + ins + gas + oil + tire + main;
    annual = month * 12;
    cout << "Your total monthly costs are $" << month << " and your total annual"
            " costs are $" << annual << "." <<endl;
    return 0;
}

