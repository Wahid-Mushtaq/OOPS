#include <iostream>

int main() {
    int num, reversed = 0;

    std::cout << "Enter an integer: ";
    std::cin >> num;

    // Reverse the number
    while (num != 0) {
        int digit = num % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Build the reversed number
        num /= 10; // Remove the last digit from the original number
    }

    std::cout << "Reversed number: " << reversed << std::endl;

    return 0;
}
