// CalculatorApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char operand = '+';

    cout << "calculator Applicatoin" << endl;
    cout << "Please enter the operation to perform the calculation. Format a+b | a-b | a*b | a/b" << endl;
    
    Calculator c;
    while (true)
    {
        cin >> x >> operand >> y;
        if (operand == '/' && y == 0)
        {
            cout << "Division by 0 excepetion" << endl;
            continue;
        }
        else
        {
        result = c.Calculate(x, operand, y);
        }
        cout << "Result is :" << result << endl;
    }
    
    return 0;
}