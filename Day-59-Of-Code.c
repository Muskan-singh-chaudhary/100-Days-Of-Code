Q117: Merge two sorted arrays
#include <stdio.h>

int main() {
    int m, n, i, j, k;
    
    printf("Enter size of first array: ");
    scanf("%d", &m);
    
    int nums1[m];
    
    printf("Enter first sorted array elements:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }
    
    printf("Enter size of second array: ");
    scanf("%d", &n);
    
    int nums2[n];
    
    printf("Enter second sorted array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }
    
    // Merge arrays
    int merged[m + n];
    i = 0; j = 0; k = 0;
    
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }
    
    while (i < m) {
        merged[k++] = nums1[i++];
    }
    
    while (j < n) {
        merged[k++] = nums2[j++];
    }
    
    printf("Merged sorted array: ");
    for (i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    
    return 0;
}

Q118: Find missing number from 0 to n
#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int nums[n];
    
    printf("Enter array elements (0 to %d with one missing):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
 
    int expected_sum = (n * (n + 1)) / 2;
 
    int actual_sum = 0;
    for (i = 0; i < n; i++) {
        actual_sum += nums[i];
    }
    
    int missing = expected_sum - actual_sum;
    
    printf("Missing number: %d\n", missing);
    
    return 0;
}
