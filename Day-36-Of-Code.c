1. Read and print a matrix.
#include <stdio.h>

int main() {
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    int mat[r][c];
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    return 0;
}

2. Find the sum of all elements in a matrix.
#include <stdio.h>

int main() {
    int r, c, i, j, sum = 0;
    scanf("%d %d", &r, &c);
    int mat[r][c];
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }
    printf("%d\n", sum);
    return 0;
}
