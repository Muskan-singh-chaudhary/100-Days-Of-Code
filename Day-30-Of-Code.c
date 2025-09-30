1. Count even and odd numbers in an array.
  #include <stdio.h>

int main() {
    int n, i;
    int even = 0, odd =0;
  
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even=%d, Odd=%d\n", even, odd);

    return 0;
}


2. Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main() {
    int n, i;
    int positive = 0, negative = 0, zero = 0;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);

    return 0;
}
