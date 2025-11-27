//Q76: Check if a matrix is symmetric.
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    if(n != m) {  
        printf("False");
        return 0;
    }

    int matrix[n][n];

    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    int symmetric = 1;  
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if(!symmetric)
            break;
    }

    if(symmetric)
        printf("True");
    else
        printf("False");

    return 0;
}
