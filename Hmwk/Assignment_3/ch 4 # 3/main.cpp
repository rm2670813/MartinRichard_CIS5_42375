/* 
 * File:   main.cpp
 * Author: Richard Martin
 * Purpose: Gaddis_7th_4_3_Write a program that asks the user to enter a month,
 * a day, and a two digit year. The program should then determine whether the 
 * month times the day is equal to the year. If so it should display a date that
 * is magic.
 * Created on March 20, 2018, 10:26 PM
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    // Variables for day, month, year, total.
    int day, month, year, tot;
    cout << "What is the month ? ";
    cin >> month;
    cout << "What is the day ? ";
    cin >> day;
    cout << "What are the last two digits of the year ? ";
    cin >> year;
    tot = month * day;
    if (tot == year)
        cout << "This is a magic date";
    else
        cout << "This is not a magic date" << endl;
    return 0;
    
}
    

