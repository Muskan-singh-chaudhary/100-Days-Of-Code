Q108: Product of array except self
#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int nums[n];
    int answer[n];
    
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
        int product = 1;
   
        for (j = 0; j < n; j++) {
            if (i != j) {
                product *= nums[j];
            }
        }
        
        answer[i] = product;
        printf("Product except nums[%d] (%d): %d\n", i, nums[i], answer[i]);
    }
    
    printf("\nAnswer array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }
    printf("\n");
    
    return 0;
}
