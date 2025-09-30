1. Search in a sorted array using binary search.
#include <stdio.h>

int main() {
    int n, i, key;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);

    int low = 0, high = n - 1, mid, found = -1;
    while(low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == key) {
            found = mid;
            break;
        } else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(found != -1)
        printf("Found at index %d\n", found);
    else
        printf("-1\n");

    return 0;
}

2. Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int n, i, key;
    scanf("%d", &n);
    int arr[n+1];
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);

    int pos = n;
    for(i = 0; i < n; i++) {
        if(arr[i] > key) {
            pos = i;
            break;
        }
    }

    for(i = n; i > pos; i--) arr[i] = arr[i-1];
    arr[pos] = key;
    for(i = 0; i <= n; i++) printf("%d ", arr[i]);

    return 0;
}
