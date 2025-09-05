3. Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main() {
    int length, breadth;
    
    // Input
    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &length, &breadth);

    // Calculations
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    // Output
    printf("Area=%d, Perimeter=%d\n", area, perimeter);

    return 0;
}

4. Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
#include <math.h>

int main() {
    float radius;
    
    // Input
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    // Calculations
    float area = M_PI * radius * radius;
    float circumference = 2 * M_PI * radius;

    // Output with 2 decimal places
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}
