#include <iostream>
#include "Calculator.h"

using namespace std;

int main () 
{
    Calculator calc;

    cout << "Please enter an integer a:" ;
    cin >> calc.m_a;
     cout << "Please enter an integer b:";
    cin >> calc.m_b;
    
    cout << "a=" << calc.m_a <<",b=" << calc.m_b << endl;

    cout << "a+b=" << calc.sum() << endl;

    return 0;
}