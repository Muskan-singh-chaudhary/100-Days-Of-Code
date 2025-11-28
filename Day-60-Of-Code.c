Q119: Find repeated element in single iteration
#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int nums[n];
    
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
   
    int actual_sum = 0;
    int expected_sum = 0;
    
    for (i = 0; i < n; i++) {
        actual_sum += nums[i];
    }
  
    int max = nums[0];
    for (i = 1; i < n; i++) {
        if (nums[i] > max) {
            max = nums[i];
        }
    }
  
    for (i = 0; i <= max; i++) {
        expected_sum += i;
    }
    
    int repeated = actual_sum - expected_sum;
    
    printf("Repeated element: %d\n", repeated);
    
    return 0;
}

Q120: Convert string to sentence case
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i;
    int capitalize_next = 1;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Original: %s", str);
 
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            capitalize_next = 1;
        } else if (capitalize_next && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
            capitalize_next = 0;
        } else if (!capitalize_next && str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            capitalize_next = 0;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            capitalize_next = 0;
        }
    }
    
    printf("Sentence case: %s", str);
    
    return 0;
}
