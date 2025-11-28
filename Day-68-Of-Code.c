Q135: Enum with explicit values starting from 10
#include <stdio.h>

enum Numbers {
    FIRST = 10,
    SECOND,
    THIRD,
    FOURTH,
    FIFTH
};

int main() {
    printf("Enum values starting from 10:\n");
    printf("FIRST = %d\n", FIRST);
    printf("SECOND = %d\n", SECOND);
    printf("THIRD = %d\n", THIRD);
    printf("FOURTH = %d\n", FOURTH);
    printf("FIFTH = %d\n", FIFTH);
    
    return 0;
}

Q136: Enum for menu choices with operations
#include <stdio.h>

enum Operation {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    enum Operation choice;
    int a, b, result;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("\nMenu:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case ADD:
            result = a + b;
            printf("%d + %d = %d\n", a, b, result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("%d - %d = %d\n", a, b, result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("%d * %d = %d\n", a, b, result);
            break;
        default:
            printf("Invalid choice\n");
    }
    
    return 0;
}
