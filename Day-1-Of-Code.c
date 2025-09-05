1. Write a program to input two numbers and display their sum.

#include <stdio.h>

int main() {
    int a, b, sum;

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Calculate sum
    sum = a + b;

    // Output
    printf("Sum = %d\n", sum);

    return 0;
}

2. Write a program to input two numbers and display their sum, difference, product, and quotient.

  #include <stdio.h>

int main() {
    int a, b;
    
    // Input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Calculations
    int sum = a + b;
    int diff = a - b;
    int product = a * b;
    int quotient = a / b;   // integer division

    // Output
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, product, quotient);

    return 0;
}
