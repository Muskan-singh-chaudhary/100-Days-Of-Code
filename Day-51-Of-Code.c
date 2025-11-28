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
