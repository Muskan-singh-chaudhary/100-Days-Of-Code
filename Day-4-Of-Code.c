1. Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main() {
    int a, b;

    // Input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swapping without third variable
    a = a + b;   // step 1
    b = a - b;   // step 2
    a = a - b;   // step 3

    // Output
    printf("After swap: %d %d\n", a, b);

    return 0;
}

2. Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main() {
    int n, sum;

    // Input
    printf("Enter n: ");
    scanf("%d", &n);

    // Formula to calculate sum of first n natural numbers
    sum = n * (n + 1) / 2;

    // Output
    printf("Sum=%d\n", sum);

    return 0;
}
