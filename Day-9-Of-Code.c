1. Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Real and different
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %.2f, %.2f\n", root1, root2);
    } 
    else if (discriminant == 0) {
        // Real and same
        root1 = -b / (2 * a);
        printf("Roots are real and same: %.2f\n", root1);
    } 
    else {
        // Complex roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex: %.2f+%.2fi, %.2f-%.2fi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}

2. Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
90-100: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
below 60: Grade F.

  #include <stdio.h>

int main() {
    int percentage;

    printf("Enter percentage (0-100): ");
    scanf("%d", &percentage);

    if (percentage >= 90 && percentage <= 100) {
        printf("Grade A\n");
    } 
    else if (percentage >= 80 && percentage <= 89) {
        printf("Grade B\n");
    } 
    else if (percentage >= 70 && percentage <= 79) {
        printf("Grade C\n");
    } 
    else if (percentage >= 60 && percentage <= 69) {
        printf("Grade D\n");
    } 
    else if (percentage >= 0 && percentage < 60) {
        printf("Grade F\n");
    } 
    else {
        printf("Invalid percentage! Please enter between 0-100.\n");
    }

    return 0;
}
