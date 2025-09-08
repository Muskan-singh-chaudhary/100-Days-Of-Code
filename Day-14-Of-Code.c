1. Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    for(i = 1; i <= n; i++) {
        sum += (2 * i - 1);  
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}

2.Write a program to print the product of even numbers from 1 to n

#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;   
    int found = 0;           
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2) {   
        product *= i;
        found = 1;   
    }

    if(found)
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    else
        printf("No even numbers between 1 and %d.\n", n);

    return 0;
}
