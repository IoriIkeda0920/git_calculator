#include <iostream>
#include "Calculator.h"

using namespace std;

Calculator::Calculator(int a, int b): m_a(a), m_b(b)
{
    cout << "create"<<endl;
}

int Calculator::sum()
{
    return m_a + m_b;
}

int Calculator::sub()
{
    return m_a - m_b;
}

int Calculator::mult()
{
    return m_a * m_b;
}

double Calculator:: div()
{
    return (double) m_a/m_b;
}