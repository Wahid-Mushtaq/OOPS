#include <iostream>
using namespace std;
int countDigits(int num)
{
    num = abs(num);

    if (num == 0)
        return 1;

    int count = 0;
    while (num > 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    int digitCount = countDigits(num);
    cout << "The number of digits in " << num << " is: " << digitCount << endl;

    return 0;
}