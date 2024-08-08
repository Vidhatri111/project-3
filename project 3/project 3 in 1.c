#include <stdio.h>

int main() {
    char current = 'a'; // Start with 'a'

    do {
        printf("%c ", current); // Print the current character
        current += 4; // Skip 3 characters by adding 4 to the current character
    } while (current <= 'z'); // Continue until 'z'

    printf("\n"); // Print a newline at the end
    return 0;
}
