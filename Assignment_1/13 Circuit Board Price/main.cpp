// Gaddis 7th Edition, Question 13
// File:    main.cpp
// Author:  Richard Martin 
// Created on March 1, 2018

// This program calculates the price an electronics store would sell a circuit
// board for with a 40 percent profit.
#include <iostream>
using namespace std;

int main ()
{
    int basePrice, profit, sellPrice;
    basePrice = 12.67;
    profit = 12.67 * 0.40;
    sellPrice = 12.67 + profit;
    cout << "After a $" << profit << " markup the store will sell the circuit"
            "board for $" << sellPrice << "."<<endl;
    return 0;
}

