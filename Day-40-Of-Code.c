1. Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int r, c, i, j, k;
    scanf("%d %d", &r, &c);
    int mat[r][c];
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    for(k = 0; k <= r + c - 2; k++) {
        for(i = 0; i < r; i++) {
            j = k - i;
            if(j >= 0 && j < c)
                printf("%d ", mat[i][j]);
        }
    }
    return 0;
}

2. Multiply two matrices.
#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
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

    int res[r1][c2];
    for(i = 0; i < r1; i++)
        for(j = 0; j < c2; j++) {
            res[i][j] = 0;
            for(k = 0; k < c1; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
        }

    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++)
            printf("%d ", res[i][j]);
        printf("\n");
    }

    return 0;
}
