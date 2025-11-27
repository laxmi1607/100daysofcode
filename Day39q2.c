//Q78: Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    if(n != m) { 
        printf("0");
        return 0;
    }

    int matrix[n][n];
    int sum = 0;


    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for(int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("%d", sum);

    return 0;
}
