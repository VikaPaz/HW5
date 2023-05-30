
#include <stdio.h>

//  Функция переоворота
void swap(int matrix[][10], int rows, int cols, int col1, int col2) {
    for (int i = 0; i < rows; i++) {
        int temp = matrix[i][col1];
        matrix[i][col1] = matrix[i][col2];
        matrix[i][col2] = temp;
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int matrix[10][10];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int minCol = 0;
    int maxCol = 0;
    int minSum = 0;
    int maxSum = 0;
    
    // mix max
    for (int j = 0; j < m; j++) {
        int colSum = 0;
        for (int i = 0; i < n; i++) {
            colSum += matrix[i][j];
        }
        
        if (j == 0) {
            minSum = colSum;
            maxSum = colSum;
        } else {
            if (colSum < minSum) {
                minSum = colSum;
                minCol = j;
            }
            if (colSum > maxSum) {
                maxSum = colSum;
                maxCol = j;
            }
        }
    }
    
    swap(matrix, n, m, minCol, maxCol);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}