1. Program to find the product of odd digits of a number

#include <stdio.h>

int main() {
    int num, digit, product = 1;
    int hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) {   
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }

    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits, product = 1\n");

    return 0;
}

2. Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
#include <string.h>

int main() {
    char binary[100], complement[100];
    int i;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    for (i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0')
            complement[i] = '1';
        else if (binary[i] == '1')
            complement[i] = '0';
        else {
            printf("Invalid binary number!\n");
            return 0;
        }
    }
    complement[i] = '\0';  

    printf("1's Complement: %s\n", complement);

    return 0;
}

