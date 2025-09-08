1. Write a program to find the LCM of two numbers.

  #include <stdio.h>

int main() {
    int a, b, tempA, tempB, remainder, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

   
    tempA = a;
    tempB = b;

    
    while (tempB != 0) {
        remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }
    hcf = tempA;

    // calculate LCM
    lcm = (a * b) / hcf;

    printf("LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}

2. Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;  
    while (temp != 0) {
        remainder = temp % 10; 
        sum += remainder;       
        temp /= 10;              
    }

    printf("Sum of digits of %d = %d\n", num, sum);

    return 0;
}
