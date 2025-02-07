#include <stdio.h>

int main() {
    int rows, cols, i, j, rowToSum, colToSum;
    int rowSum = 0, colSum = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int a[rows][cols]; 
    printf("Enter the elements of the array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe entered 2D array is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter the row to calculate the sum (0 to %d): ", rows - 1);
    scanf("%d", &rowToSum);
    printf("Enter the column to calculate the sum (0 to %d): ", cols - 1);
    scanf("%d", &colToSum);

    for (j = 0; j < cols; j++) {
        rowSum += a[rowToSum][j];
    }

    for (i = 0; i < rows; i++) {
        colSum += a[i][colToSum];
    }

    printf("\nThe sum of elements in row %d is: %d\n", rowToSum, rowSum);
    printf("The sum of elements in column %d is: %d\n", colToSum, colSum);

    return 0;
}

