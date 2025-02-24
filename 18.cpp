// Program in cpp that accepts a students marks in 5 subjects using nested if else
#include <iostream>
using namespace std;

int main()
{
    float marks[5];
    float total = 0.0;
    float average;

    cout << "Enter marks for 5 subjects:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    average = total / 5;

    bool passedAllSubjects = true;
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] < 40)
        {
            passedAllSubjects = false;
            break;
        }
    }
    if (!passedAllSubjects)
    {
        cout << "The student has failed in one or more subjects.\n";
    }
    else
    {

        cout << "The student has passed in all subjects.\n";

        if (average >= 90)
        {
            cout << "Wowww! Your Grade is A+\n";
        }
        else if (average >= 80)
        {
            cout << "Noiceee Your Grade is A\n";
        }
        else if (average >= 70)
        {
            cout << " Your Grade is B\n";
        }
        else if (average >= 60)
        {
            cout << "Your Grade is C\n";
        }
        else if (average >= 50)
        {
            cout << "Your Grade is D\n";
        }
        else
        {
            cout << "Your Grade is F\n";
        }
    }
        return 0;
}