/* 
 * File:   main.cpp
 * Author: Richard Martin
 * Created on March 10, 2018, 8:52 PM
 * Purpose: A program that calculates the minimum insurance needed based on the
 * property cost entered by the user.
 */
//  Gaddis_7th Edition_Ch. 3_Problem 8_This program calculates and displays the 
//  the minimum insurance needed based on the property cost entered by the user.
#include <iostream>
using namespace std;

int main()
{
    double repCost, minIns;
    cout << "This program calculates the minimum insurance needed based on the"
            "value of the property entered by the user."<<endl;
    cout << "How much would it cost to replace your property? ";
    cin >> repCost;
    minIns = repCost * .8;
    cout << "It is recommended that you have 80%, or $" << minIns << ", of your"
            " replacement cost in minimum insurance."<<endl;
    return 0;
}
    

    


