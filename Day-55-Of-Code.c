Q105: Find majority element (appears more than n/2 times)
#include <stdio.h>

int main() {
    int n, i, j;
    int majority = -1;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int nums[n];
    
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    printf("Array size: %d\n", n);
    printf("Majority threshold: %d (more than n/2)\n", n/2);
  
    for (i = 0; i < n; i++) {
        int count = 0;
    
        for (j = 0; j < n; j++) {
            if (nums[j] == nums[i]) {
                count++;
            }
        }
        
        printf("Element %d appears %d times\n", nums[i], count);
     
        if (count > n/2) {
            majority = nums[i];
            break;
        }
    }
    
    if (majority != -1) {
        printf("Majority element: %d\n", majority);
    } else {
        printf("No majority element found\n");
        printf("Result: -1\n");
    }
    
    return 0;
}
