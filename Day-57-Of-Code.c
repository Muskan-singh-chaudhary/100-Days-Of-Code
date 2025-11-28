Q113: Find kth smallest element in array
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
    
    printf("Enter k (for kth smallest): ");
    scanf("%d", &k);
    
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    if (k > 0 && k <= n) {
        printf("%dth smallest element: %d\n", k, arr[k - 1]);
    } else {
        printf("Invalid k value\n");
    }
    
    return 0;
}

Q114: Length of longest substring without repeating characters
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j, k;
    int max_length = 0;
    
    printf("Enter a string: ");
    scanf("%s", s);
    
    int len = strlen(s);
    printf("String: %s\n", s);
  
    for (i = 0; i < len; i++) {
        int visited[256] = {0};
        
        for (j = i; j < len; j++) {
            if (visited[(int)s[j]] == 1) {
                break;
            }
            
            visited[(int)s[j]] = 1;
            int current_length = j - i + 1;
            
            if (current_length > max_length) {
                max_length = current_length;
            }
        }
    }
    
    printf("Length of longest substring without repeating characters: %d\n", max_length);
    
    return 0;
}
