1. Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int n, i, j, flag = 1;
    scanf("%d %d", &n, &n);
    int mat[n][n];
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    for(i = 0; i < n-1; i++)
        for(j = i+1; j < n; j++)
            if(mat[i][i] == mat[j][j])
                flag = 0;
    if(flag)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}

2. Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    scanf("%d %d", &n, &n);
    int mat[n][n];
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    for(i = 0; i < n; i++)
        sum += mat[i][i];
    printf("%d\n", sum);
    return 0;
}
