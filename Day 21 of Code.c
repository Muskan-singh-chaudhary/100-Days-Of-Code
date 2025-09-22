1. Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int num, digit, product = 1;
    int hasOdd = 0; 
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

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
        printf("No odd digits found!\n");

    return 0;
}

2. Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
#include <string.h>

int main() {
    char bin[100];
    printf("Enter a binary number: ");
    scanf("%s", bin);

    for (int i = 0; i < strlen(bin); i++) {
        if (bin[i] == '0')
            bin[i] = '1';
        else if (bin[i] == '1')
            bin[i] = '0';
    }

    printf("1's Complement = %s\n", bin);
    return 0;
}
