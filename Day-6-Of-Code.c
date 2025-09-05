1. Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>

int main() {
    int num;

    // Input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check even or odd
    if(num % 2 == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }

    return 0;
}

2. Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main() {
    int num;

    // Input lena
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Nested if-else
    if (num >= 0) {
        if (num == 0) {
            printf("Zero\n");
        } else {
            printf("Positive\n");
        }
    } else {
        printf("Negative\n");
    }

    return 0;
}
