// Program in cpp that checks whetehr a given year is a leap year or not using nested if else and the leap year is only if it is divisible by 4 but not by 100, unless divisible by 400. Logic to print the next 5 leap years if the input year is not a leap year
#include <iostream>
using namespace std;

bool isLeapYear(int year)
{

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                return true; // Divisible by 400
            }
            else
            {
                return false; // Divisible by 100 but not by 400
            }
        }
        else
        {
            return true; // Divisible by 4 but not by 100
        }
    }
    else
    {
        return false; // Not divisible by 4
    }
}

void printNextLeapYears(int year)
{
    int count = 0;
    year++;
    while (count < 5)
    {
        if (isLeapYear(year))
        {
            cout << year << " ";
            count++;
        }
        year++;
    }
}

int main()
{
    int year;

    cout << "Enter a year that is to be checked\n";
    cin >> year;

    if (isLeapYear(year))
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is not a leap year." << endl;
        cout << "Next 5 leap years are: ";
        printNextLeapYears(year);
    }

    return 0;
}
