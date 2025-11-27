//Q75: Add two matrices.
#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;


    scanf("%d %d", &rows1, &cols1);
    int mat1[rows1][cols1];


    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }


    scanf("%d %d", &rows2, &cols2);
    int mat2[rows2][cols2];

    
    for(int i = 0; i < rows2; i++) {
        for(int j = 0; j < cols2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    
    if(rows1 != rows2 || cols1 != cols2) {
        printf("Matrix addition not possible");
        return 0;
    }

    
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols1; j++) {
            printf("%d ", mat1[i][j] + mat2[i][j]);
        }
        printf("\n");
    }

    return 0;
}

