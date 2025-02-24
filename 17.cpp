// Program in cpp that accepts two complex numbers(real and imaginary parts) and compares them using if else
#include <iostream>
using namespace std;

struct Complex
{
    double real;
    double imaginary;
};

int main()
{
    Complex n1, n2;

    cout << "Enter real part of first complex number: ";
    cin >> n1.real;
    cout << "Enter imaginary part of first complex number: ";
    cin >> n1.imaginary;

    cout << "Enter real part of second complex number: ";
    cin >> n2.real;
    cout << "Enter imaginary part of second complex number: ";
    cin >> n2.imaginary;

    if (n1.real == n2.real && n1.imaginary == n2.imaginary)
    {
        cout << "The two complex numbers are equal." << endl;
    }
    else
    {
        cout << "The two complex numbers are not equal." << endl;
    }

    return 0;
}
