1. Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

  #include <stdio.h>

int main() {
    int num1, num2;
    char op;

    // Input
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);   // notice space before %c to ignore newline

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Switch-case calculator
    switch(op) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;

        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;

        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;

        case '/':
            if(num2 != 0)
                printf("%d / %d = %d\n", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero not allowed.\n");
            break;

        case '%':
            if(num2 != 0)
                printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            else
                printf("Error! Modulus by zero not allowed.\n");
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}

2. Write a program to print numbers from 1 to n.
  
  #include <stdio.h>

int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Numbers from 1 to %d are:\n", n);

    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}



