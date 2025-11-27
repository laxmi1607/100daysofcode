//Q77: Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    if(rows != cols) { 
        printf("False");
        return 0;
    }

    int matrix[rows][cols];

    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int distinct = 1; 

    
    for(int i = 0; i < rows; i++) {
        for(int j = i + 1; j < rows; j++) {
            if(matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }
        if(!distinct)
            break;
    }

    if(distinct)
        printf("True");
    else
        printf("False");

    return 0;
}
