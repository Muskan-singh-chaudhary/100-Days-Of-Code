1. Find the second largest element in an array.
#include <stdio.h>

int main() {
    int n, i, largest, second;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);

    if(arr[0] > arr[1]) {
        largest = arr[0];
        second = arr[1];
    } else {
        largest = arr[1];
        second = arr[0];
    }

    for(i = 2; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    printf("%d\n", second);
    return 0;
}

2. Rotate an array to the right by k positions.
#include <stdio.h>

int main() {
    int n, k, i, temp;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);
    k = k % n;

    for(i = 0; i < k; i++) {
        temp = arr[n-1];
        for(int j = n-1; j > 0; j--) arr[j] = arr[j-1];
        arr[0] = temp;
    }

    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
