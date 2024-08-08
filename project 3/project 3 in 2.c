#include <stdio.h>

int countDigits(int number) {
    int count = 0;

    // Handle the special case where the number is 0
    if (number == 0) {
        return 1;
    }

    // Handle negative numbers by converting them to positive
    if (number < 0) {
        number = -number;
    }

    // Count digits by dividing the number by 10 until it becomes 0
    while (number > 0) {
        number /= 10;
        count++;
    }

    return count;
}

int main() {
    int number;

    // Prompt the user for input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Count the digits and print the result
    int digitCount = countDigits(number);
    printf("The total number of digits is: %d\n", digitCount);

    return 0;
}
