#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_

class Calculator
{
    private:
        int m_a;
        int m_b;
    
    public:
        Calculator(int a,int b);
        int sum();
        int sub();
        int mult();
        double div();

};

#endif 