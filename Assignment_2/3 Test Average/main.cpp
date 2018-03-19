/* 
 * File:   main.cpp
 * Author: Richard Martin
 * Created on March 10, 2018, 8:02 PM
 * Purpose:  Create a program that calculates the average of 5 tests.
 */
//  Gaddis_7th Edition_Ch. 3_Problem 3_This program will calculate the average
//  of 5 tests based on the scores the user enters.

#include <iostream>
using namespace std;


int main()
{

    double test1, test2, test3, test4, test5, total, average;

    cout << "This program calculates the average of the five test scores entered"
        "below."<<endl;
    cout << "What is the score of your first test? ";
    cin >> test1;
    cout << "What is the score of your second test? ";
    cin >> test2;
    cout << "What is the score of your third test? ";
    cin >> test3;
    cout << "What is the score of your fourth test? ";
    cin >> test4;
    cout << "What is the score of your fifth test? ";
    cin >> test5;
    total = test1 + test2 + test3 + test4 + test5;
    average = total / 5;
    cout << "The average of your test scores is" << average << "."<<endl;
 
}
