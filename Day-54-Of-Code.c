Q104: Find pivot integer x where sum(1 to x) equals sum(x to n)
#include <stdio.h>

int main() {
    int n, x;
    int pivot = -1;
    
    printf("Enter positive integer n: ");
    scanf("%d", &n);
    
    printf("n: %d\n", n);
 
    for (x = 1; x <= n; x++) {
        int left_sum = 0, right_sum = 0;
        int i;
       
        for (i = 1; i <= x; i++) {
            left_sum += i;
        }
     
        for (i = x; i <= n; i++) {
            right_sum += i;
        }
        
        printf("x = %d: sum(1 to %d) = %d, sum(%d to %d) = %d\n", 
               x, x, left_sum, x, n, right_sum);
        
        if (left_sum == right_sum) {
            pivot = x;
            break;
        }
    }
    
    printf("Pivot integer: %d\n", pivot);
    
    return 0;
}
