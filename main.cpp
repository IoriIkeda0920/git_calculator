#include <iostream>
#include "Calculator.h"

using namespace std;

int main () 
{
    int a=0 , b=0;

    cout << "Please enter an integer a:" ;
    cin >> a;
     cout << "Please enter an integer b:";
    cin >> b;

    Calculator *calc;

    calc = new Calculator(a,b);

    cout << "a=" << a <<",b=" << b << endl;

    cout << "a+b=" << calc->sum() << endl;
    cout << "a-b=" << calc->sub() << endl;
    cout << "a*b=" << calc->mult() << endl;
    cout << "a/b=" << calc->div() << endl;

    return 0;
}