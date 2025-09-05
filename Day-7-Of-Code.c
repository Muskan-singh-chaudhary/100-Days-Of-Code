1. Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>

int main() {
    int year;

    // Input lena
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year check
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }

    return 0;
}

2. Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>

int main() {
    char ch;

    // Character input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check vowel ya consonant
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
        ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }

    return 0;
}
