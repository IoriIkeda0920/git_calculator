#include "Calculator.h"


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