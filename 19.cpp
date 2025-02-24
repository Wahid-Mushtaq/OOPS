// Program in cpp to create a calculator program that takes two operands and operator (+,-,*,/,%)
#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char op;
    cout << "Enter first operand: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> op;

    cout << "Enter second operand: ";
    cin >> num2;

    if (op == '+')
    {
        cout << "Result: " << num1 + num2 << endl;
    }
    else if (op == '-')
    {
        cout << "Result: " << num1 - num2 << endl;
    }
    else if (op == '*')
    {
        cout << "Result: " << num1 * num2 << endl;
    }
    else if (op == '/')
    {

        if (num2 == 0)
        {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        else
        {
            cout << "Result: " << num1 / num2 << endl;
        }
    }
    else if (op == '%')
    {

        if (static_cast<int>(num1) != num1 || static_cast<int>(num2) != num2)
        {
            cout << "Error: Modulus operation requires integer operands." << endl;
        }
        else
        {
            cout << "Result: " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
        }
    }
    else
    {
        cout << "Invalid operator!" << endl;
    }

    return 0;
}
