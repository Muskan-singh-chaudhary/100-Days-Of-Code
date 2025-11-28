Q109: Maximum sum of all subarrays of size k.
#include <stdio.h>

int main() {
    int n, k, i, j;
    int max_sum = 0;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter subarray size k: ");
    scanf("%d", &k);
    
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Subarray size k: %d\n", k);
    
    if (k > n) {
        printf("Error: k cannot be greater than array size\n");
        return 1;
    }
 
    printf("\nAll subarrays of size %d:\n", k);
    
    for (i = 0; i <= n - k; i++) {
        int current_sum = 0;
        
        printf("Subarray %d: [", i + 1);
        for (j = i; j < i + k; j++) {
            printf("%d", arr[j]);
            if (j < i + k - 1) printf(", ");
            current_sum += arr[j];
        }
        printf("] = %d\n", current_sum);
   
        if (i == 0 || current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    
    printf("\nMaximum sum of subarray of size %d: %d\n", k, max_sum);
    
    return 0;
}

Q110: Maximum element in each subarray of size k (sliding window)
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
    
    printf("\nSliding window maximums:\n");

    for (i = 0; i <= n - k; i++) {
        int max_in_window = arr[i];
        
        printf("Window %d: [", i + 1);
        for (j = i; j < i + k; j++) {
            printf("%d", arr[j]);
            if (j < i + k - 1) printf(", ");

            if (arr[j] > max_in_window) {
                max_in_window = arr[j];
            }
        }
        printf("] -> Max: %d\n", max_in_window);
    }
    
    printf("\nMaximum elements in each window: ");
    for (i = 0; i <= n - k; i++) {
        int max_in_window = arr[i];
     
        for (j = i; j < i + k; j++) {
            if (arr[j] > max_in_window) {
                max_in_window = arr[j];
            }
        }
        
        printf("%d", max_in_window);
        if (i < n - k) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}
