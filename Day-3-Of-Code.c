1. Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Conversion
    fahrenheit = (celsius * 9 / 5) + 32;

    // Output
    printf("Fahrenheit=%.0f\n", fahrenheit);

    return 0;
}

2. Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
    int a, b, temp;

    // Input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swapping using third variable
    temp = a;
    a = b;
    b = temp;

    // Output
    printf("After swap: %d %d\n", a, b);

    return 0;
}

