1. Write a program to print the following pattern:
    5
   45
  345
 2345
12345

#include <stdio.h>

int main() {
    int i, j, start;
    for (i = 1; i <= 5; i++) {
        for (j = 5; j > i; j--) {
            printf(" ");
        }
        start = 6 - i;
        for (j = start; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}


2. Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
#include <stdio.h>

int main() {
    printf("*\n\n");
    printf("*\n*\n*\n\n");
    printf("*\n*\n*\n*\n*\n\n");
    printf("*\n*\n*\n\n");
    printf("*\n");
    return 0;
}
