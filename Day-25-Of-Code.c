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
        start = 6 - i;
        for (j = start; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

2.Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

#include <stdio.h>

int main() {
    int i, j, k;
    for (i = 5; i >= 1; i--) {
        for (j = 5; j > i; j--) {
            printf(" ");
        }
        for (k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
