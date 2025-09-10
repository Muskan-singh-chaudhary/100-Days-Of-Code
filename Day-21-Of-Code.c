1. Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, temp, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10; 

    digits = (int)log10(temp);  
    first = temp / pow(10, digits); 

    
    temp = temp % (int)pow(10, digits); 
    temp = temp / 10; 

      swapped = last * pow(10, digits) + temp * 10 + first;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}

2. Write a program to check if a number is a perfect number.

#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 1; i <= num / 2; i++) {  
        if(num % i == 0) {
            sum += i;
        }
    }

    if(sum == num)
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect number.\n", num);

    return 0;
}

