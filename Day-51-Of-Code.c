Q101: Find first and last occurrence of target in sorted array
#include <stdio.h>

int main() {
    int n, target, i;
    int first = -1, last = -1;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int nums[n];
    
    printf("Enter sorted array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    printf("Enter target value: ");
    scanf("%d", &target);
    
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    printf("Target: %d\n", target);
    
    // Find first occurrence
    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            first = i;
            break;
        }
    }
    

    for (i = n - 1; i >= 0; i--) {
        if (nums[i] == target) {
            last = i;
            break;
        }
    }
    
    printf("First occurrence: %d\n", first);
    printf("Last occurrence: %d\n", last);
    
    return 0;
}

- 1, result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            result = mid;
            left = mid + 1; 
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

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
