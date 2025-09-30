1. Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    int mat[r][c], rowSum[r];
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
    for(i = 0; i < r; i++) {
        rowSum[i] = 0;
        for(j = 0; j < c; j++)
            rowSum[i] += mat[i][j];
    }
    for(i = 0; i < r; i++) printf("%d ", rowSum[i]);
    return 0;
}

2. Find the transpose of a matrix.
#include <stdio.h>

int main() {
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    int mat[r][c], trans[c][r];
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            trans[j][i] = mat[i][j];
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++)
            printf("%d ", trans[i][j]);
        printf("\n");
    }
    return 0;
}
