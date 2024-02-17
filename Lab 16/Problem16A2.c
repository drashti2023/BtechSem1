#include <stdio.h>

int main() {
    int matrix[3][3];
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;
    int i,j;
    
    printf("Enter the elements of the matrix:\n");
    
    for ( i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
            
            if (matrix[i][j] > 0) {
                positiveCount++;
            } else if (matrix[i][j] < 0) {
                negativeCount++;
            } else {
                zeroCount++;
            }
        }
    }
    
    printf("Positive count: %d\n", positiveCount);
    printf("Negative count: %d\n", negativeCount);
    printf("Zero count: %d\n", zeroCount);
    
    return 0;
}
