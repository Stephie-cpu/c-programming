#include <stdio.h>

int main() {
    int n, i = 1;

    // Prompt the user for the number of terms
    printf("Input number of terms: ");
    scanf("%d", &n);

    // Display the cube of numbers from 1 to n using a while loop
    while (i <= n) {
        printf("Number is: %d and cube of the %d is: %d\n", i, i, i * i * i);
        i++;
    }

    return 0;
}