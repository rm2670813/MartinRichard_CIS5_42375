/* 
 * File:   main.cpp
 * Author: Richard Martin
 * Purpose: Gaddis_7th_4_7_
 * Created on March 20, 2018, 11:32 PM
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main() 
{
    int Seconds; //Seconds given by user
    float Minutes; //Minutes
    float Hours;
    float days;
    
    cout << "This program converts seconds into minutes"<<endl;
    
    cout << "How many seconds? ";
    cin >> Seconds;
    Minutes = Seconds / 60;
    Hours = Minutes / 60;
    days = Hours / 24;
            
    
    if (Seconds<=60)
    cout << "" << Seconds << " Total seconds";
    else if (Seconds==60-3600)
    cout << "" <<Minutes<< " Total Minutes";
    else if (Seconds==3601-86400)
    cout << "" << Hours << " Total Hours";
    else if (Seconds >= 86401)
    cout << "" <<days << " Total Days";
    
    return 0;
}
