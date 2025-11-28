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

Q112: Maximum sum of contiguous subarray (Kadane's Algorithm)
#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
 
    int max_sum = arr[0];
    int current_sum = arr[0];
    
    printf("\nKadane's Algorithm process:\n");
    printf("Index 0: current_sum = %d, max_sum = %d\n", current_sum, max_sum);
    
    for (i = 1; i < n; i++) {
        current_sum = (arr[i] > current_sum + arr[i]) ? arr[i] : current_sum + arr[i];
        max_sum = (current_sum > max_sum) ? current_sum : max_sum;
        printf("Index %d: current_sum = %d, max_sum = %d\n", i, current_sum, max_sum);
    }
    
    printf("\nMaximum sum of contiguous subarray: %d\n", max_sum);
    
    return 0;
}
