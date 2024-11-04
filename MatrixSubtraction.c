#include <stdio.h>

#define MAX_SIZE 10  

void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("The matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int matrix1[MAX_SIZE][MAX_SIZE], int matrix2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

int main() {
    printf("Program of Matrix Addition");
    int rows, cols;
    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Matrix 1:\n");
    inputMatrix(matrix1, rows, cols);
    printMatrix(matrix1, rows, cols);

    printf("Matrix 2:\n");
    inputMatrix(matrix2, rows, cols);
    printMatrix(matrix2, rows, cols);


    addMatrices(matrix1, matrix2, result, rows, cols);

    printf("Result of Matrix Addition:\n");
    printMatrix(result, rows, cols);

    return 0;
}
