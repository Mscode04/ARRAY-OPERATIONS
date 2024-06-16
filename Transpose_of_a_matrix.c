// TRANSPOSE OF A MATRIX

#include <stdio.h>

void transposeMatrix(int matrix[][10], int transposed[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

void displayMatrix(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[10][10], transposed[10][10];
    int rows, cols;

    printf("Enter rows and columns for the matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    transposeMatrix(matrix, transposed, rows, cols);

    printf("\nTransposed Matrix:\n");
    displayMatrix(transposed, cols, rows);

    return 0;
}
