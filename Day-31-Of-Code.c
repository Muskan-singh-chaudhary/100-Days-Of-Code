1. Search for an element in an array using linear search.
#include <stdio.h>

int main() {
    int n, i, key, found = -1;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = i;
            break;
        }
    }
    if(found != -1)
        printf("Found at index %d\n", found);
    else
        printf("-1\n");
    return 0;
}

2. Reverse an array without taking extra space.
#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    for(i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
