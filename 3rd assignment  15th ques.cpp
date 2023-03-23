#include <stdio.h>

int main() {
    int matrix[3][3], i, j, sum = 0;
    
    
    printf("Enter the elements of the 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("\nDiagonal elements are: ");
    for(i = 0; i < 3; i++) {
        printf("%d ", matrix[i][i]);
        sum += matrix[i][i];
    }
    
    printf("\nSum of diagonal elements = %d\n", sum);
    
    return 0;
}

