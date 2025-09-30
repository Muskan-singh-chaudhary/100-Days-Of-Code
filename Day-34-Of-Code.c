1. Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int n, i, pos, val;
    scanf("%d", &n);
    int arr[n+1];
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d %d", &pos, &val);
    for(i = n; i > pos; i--) arr[i] = arr[i-1];
    arr[pos] = val;
    for(i = 0; i <= n; i++) printf("%d ", arr[i]);
    return 0;
}

2. Delete an element from an array.
#include <stdio.h>

int main() {
    int n, i, pos;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &pos);
    for(i = pos; i < n-1; i++) arr[i] = arr[i+1];
    for(i = 0; i < n-1; i++) printf("%d ", arr[i]);
    return 0;
}
