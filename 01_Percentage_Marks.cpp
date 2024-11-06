#include <iostream>
using namespace std;

int main()
{
    const int numSubjects = 5;
    float marks[numSubjects];
    float totalMarks = 0.0;
    float percentage;
    cout << "Enter marks for " << numSubjects << " subjects:\n";
    for (int i = 0; i < numSubjects; i++)
    {
        cout << "Subject " << (i + 1) << ": ";
        cin >> marks[i];
        totalMarks += marks[i];
    }

    percentage = (totalMarks / (numSubjects * 100)) * 100;

    cout << "\nTotal Marks: " << totalMarks << " out of " << (numSubjects * 100) << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    if (percentage >= 90)
    {
        cout << "Grade: A" << endl;
    }
    else if (percentage >= 80)
    {
        cout << "Grade: B" << endl;
    }
    else if (percentage >= 70)
    {
        cout << "Grade: C" << endl;
    }
    else if (percentage >= 60)
    {
        cout << "Grade: D" << endl;
    }
    else
    {
        cout << "Grade: F" << endl;
    }

    return 0;
}
