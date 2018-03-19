#include <iostream>
using namespace std;

int main()
{
    float actualV; //actual value of the property
    float assessedV; //assessed value of the property
    double propTax; //property tax on the property
    
    cout << "This program calculates the assessment value and property tax based"
            "on the values entered by the user."<<endl;
    cout << "What is the value of your property? ";
    cin >> actualV;
    assessedV = actualV * .6;
    cout << "The assessed value of your property is $" << assessedV << ".";
    propTax = assessedV * .0064;
    cout << " The property tax on your property is $" << propTax << "."<<endl;
    return 0;
    
}
