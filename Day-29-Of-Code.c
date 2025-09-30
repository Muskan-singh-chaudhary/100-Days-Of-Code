1. Find the sum of array elements.
#include <stdio.h>
int main() {
    int n, i, sum = 0;
    scanf("%d", &n);
    int arr[1000];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}
 2. Find the maximum and minimum element in an array.
#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    int arr[1000];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0], min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Max=%d, Min=%d", max, min);
    return 0;
}
