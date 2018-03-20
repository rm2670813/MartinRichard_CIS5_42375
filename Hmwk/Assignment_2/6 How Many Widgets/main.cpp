/* 
 * File:   main.cpp
 * Author: Richard Martin
 * Created on March 10, 2018, 8:52 PM
 * Purpose: A program that calculates the number of widgets on a pallet based
 * on the weight entered by the user.
 */
//  Gaddis_7th Edition_Ch. 3_Problem 6_This program calculates the number of
//  widgets on a pallet based on the weight of the pallet.

#include <iostream>
using namespace std;

int main()
{
    int palletWgt, totalWgt, widgetWgt, widgets;
    
    cout << "This program calculates the number of widgets on a pallet based on"
            "the weight of the pallet entered by the user."<<endl;
    cout << "How much does a pallet weigh by itself? ";
    cin >> palletWgt;
    cout << "How much does a pallet weigh with widgets on it? ";
    cin >> totalWgt;
    widgetWgt = totalWgt - palletWgt;
    widgets = widgetWgt / 9.2;
    cout << "There are " << widgets << " widgets on the pallet."<<endl;
    return 0;
    
}