#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit, temp;

    // Prompt the user for input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Handle negative numbers by converting them to positive
    if (number < 0) {
        number = -number;
    }

    // Find the last digit
    lastDigit = number % 10;

    // Find the first digit
    temp = number;
    while (temp >= 10) {
        temp /= 10;
    }
    firstDigit = temp;

    // Calculate the sum of the first and last digits
    int sum = firstDigit + lastDigit;

    // Print the result
    printf("The sum of the first and last digits is: %d\n", sum);

    return 0;
}
