// Program in cpp to solve a quadratic equation using nested if else for distinctand real, real and equal, or imaginary. Use conditional operators to check if coefficents are valid(non zero)
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter coefficient a (non-zero): ";
    cin >> a;

    if (a == 0)
    {
        cout << "Coefficient 'a' cannot be zero for a quadratic equation!" << endl;
        return 0;
    }

    cout << "Enter coefficient b: ";
    cin >> b;

    cout << "Enter coefficient c: ";
    cin >> c;

    double discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0)
    {
        // Real and distinct roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The roots are real and distinct." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (discriminant == 0)
    {
        // Real and equal roots
        double root = -b / (2 * a);
        cout << "The roots are real and equal." << endl;
        cout << "Root = " << root << endl;
    }
    else
    {
        // Imaginary roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "The roots are imaginary." << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
