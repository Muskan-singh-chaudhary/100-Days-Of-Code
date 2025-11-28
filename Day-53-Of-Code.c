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

Q106: Find next greater element for each element (brute force)
#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    int next_greater[n];
    
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Find next greater element for each element using brute force
    for (i = 0; i < n; i++) {
        next_greater[i] = -1;  // Default value
        
        // Look for next greater element to the right
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next_greater[i] = arr[j];
                break;
            }
        }
        
        printf("For element %d at index %d: ", arr[i], i);
        if (next_greater[i] != -1) {
            printf("Next greater element is %d\n", next_greater[i]);
        } else {
            printf("No next greater element\n");
        }
    }
    
    printf("\nNext Greater Elements: ");
    for (i = 0; i < n; i++) {
        printf("%d", next_greater[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
    
    return 0;
}
