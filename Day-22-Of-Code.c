1. Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int num, temp, digit, fact, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }
    if (sum == num)
        printf("%d is a Strong number.\n", num);
    else
        printf("%d is not a Strong number.\n", num);
    return 0;
}

2. Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int numerator = 2 * i + 1;
        int denominator = numerator + 1;
        sum += (double)numerator / denominator;
    }

    printf("Approximate sum: %.1lf\n", sum);
    return 0;
}
