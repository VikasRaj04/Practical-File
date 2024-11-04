#include <stdio.h>

#define MAXSIZE 100

int printMatrix(int *arr[], int n, int m)
{
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return;
}

int main()
{
    int n, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);
    int arr[n][m];

    printf("Enter the elements of the matrix 1:\n");

    for (int i = 0; i < n; i++)  //  for rows

    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter element for arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printMatrix(&arr, n, m);

    return 0;
}