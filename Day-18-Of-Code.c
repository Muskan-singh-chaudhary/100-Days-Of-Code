1. Write a program to print all factors of a given number.

  #include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    for(i = 1; i <= num; i++) {
        if(num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

2. Write a program to find the HCF (GCD) of two numbers.

  #include <stdio.h>

int main() {
    int a, b, tempA, tempB, remainder;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    // Euclidean algorithm
    while (tempB != 0) {
        remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }

    printf("HCF (GCD) of %d and %d is %d\n", a, b, tempA);

    return 0;
}
