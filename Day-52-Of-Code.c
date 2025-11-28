Q102: Find ceil of x in sorted array
#include <stdio.h>

int main() {
    int n, x, i;
    int ceil_index = -1;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter sorted array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter value x: ");
    scanf("%d", &x);
    
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("x: %d\n", x);
   
    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ceil_index = i;
            break;
        }
    }
    
    if (ceil_index != -1) {
        printf("Ceil of %d is %d at index %d\n", x, arr[ceil_index], ceil_index);
    } else {
        printf("Ceil of %d does not exist\n", x);
        printf("Index: %d\n", ceil_index);
    }
    
    return 0;
}
