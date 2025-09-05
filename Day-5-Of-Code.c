1. Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>   // for pow()

int main() {
    float P, R, T;
    float SI, CI;

    // Input
    printf("Enter Principal, Rate, Time: ");
    scanf("%f %f %f", &P, &R, &T);

    // Simple Interest
    SI = (P * R * T) / 100;

    // Compound Interest
    CI = P * pow((1 + R / 100), T) - P;

    // Output
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", SI, CI);

    return 0;
}

2. Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Input
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Conversion
    hours = totalSeconds / 3600;             // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60;    // remaining minutes
    seconds = totalSeconds % 60;             // remaining seconds

    // Output
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
