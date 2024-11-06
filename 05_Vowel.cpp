// Program in C++ to check the alphabet is a vowel or not
#include <iostream>
using namespace std;
int main()
{
    char s;
    cout << "Enter the letter\n";
    cin >> s;
    if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u')
        cout << "The letter entered is vowel";
    else
        cout << "The letter is consonant";
}