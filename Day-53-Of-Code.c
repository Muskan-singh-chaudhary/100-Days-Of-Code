Q103: Find pivot index where left sum equals right sum
#include <stdio.h>

int main() {
    int n, i, j;
    int pivot_index = -1;
    
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
 
    for (i = 0; i < n; i++) {
        int left_sum = 0, right_sum = 0;
     
        for (j = 0; j < i; j++) {
            left_sum += nums[j];
        }
      
        for (j = i + 1; j < n; j++) {
            right_sum += nums[j];
        }
        
        printf("Index %d: left_sum = %d, right_sum = %d\n", i, left_sum, right_sum);
        
        if (left_sum == right_sum) {
            pivot_index = i;
            break;
        }
    }
    
    printf("Pivot index: %d\n", pivot_index);
    
    return 0;
}
