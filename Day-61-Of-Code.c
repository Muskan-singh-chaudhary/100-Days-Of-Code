Q111: First negative integer in each subarray of size k
#include <stdio.h>

int main() {
    int n, k, i, j;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter window size k: ");
    scanf("%d", &k);
    
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Window size k: %d\n", k);
    
    if (k > n) {
        printf("Error: k cannot be greater than array size\n");
        return 1;
    }
    
    printf("\nFirst negative in each window:\n");

    for (i = 0; i <= n - k; i++) {
        int first_negative = 0;  
        
        printf("Window %d: [", i + 1);
        for (j = i; j < i + k; j++) {
            printf("%d", arr[j]);
            if (j < i + k - 1) printf(", ");
         
            if (arr[j] < 0 && first_negative == 0) {
                first_negative = arr[j];
            }
        }
        printf("] -> First negative: ");
        if (first_negative != 0) {
            printf("%d\n", first_negative);
        } else {
            printf("0 (no negative)\n");
        }
    }
    
    printf("\nFirst negative integers in each window: ");
    for (i = 0; i <= n - k; i++) {
        int first_negative = 0;  
        
  
        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                first_negative = arr[j];
                break; 
            }
        }
        
        printf("%d", first_negative);
        if (i < n - k) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}
