1. Merge two arrays.
#include <stdio.h>

int main() {
    int n1, n2, i;
    scanf("%d", &n1);
    int arr1[n1];
    for(i = 0; i < n1; i++) scanf("%d", &arr1[i]);
    scanf("%d", &n2);
    int arr2[n2];
    for(i = 0; i < n2; i++) scanf("%d", &arr2[i]);
    for(i = 0; i < n1; i++) printf("%d ", arr1[i]);
    for(i = 0; i < n2; i++) printf("%d ", arr2[i]);
    return 0;
}

2. Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0}, i, max = 0, digit;
    scanf("%lld", &n);
    while(n > 0) {
        freq[n % 10]++;
        n /= 10;
    }
    for(i = 0; i < 10; i++) {
        if(freq[i] > max) {
            max = freq[i];
            digit = i;
        }
    }
    printf("%d\n", digit);
    return 0;
}
