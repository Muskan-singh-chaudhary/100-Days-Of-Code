1. Add two matrices.
#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j;
    scanf("%d %d", &r1, &c1);
    int mat1[r1][c1];
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &mat1[i][j]);

    scanf("%d %d", &r2, &c2);
    int mat2[r2][c2];
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &mat2[i][j]);

    int sum[r1][c1];
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            sum[i][j] = mat1[i][j] + mat2[i][j];

    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}

2. Check if a matrix is symmetric.
#include <stdio.h>

int main() {
    int n, i, j, flag = 1;
    scanf("%d", &n);
    int mat[n][n];
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            if(mat[i][j] != mat[j][i])
                flag = 0;

    if(flag)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
