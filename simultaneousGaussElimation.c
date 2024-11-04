#include <stdio.h>

#define n 3

int main()
{
    float a[n][n + 1], x[n], t, s;
    int i, j, k;

    // Input the augmented matrix
    printf("Enter the elements of the augmented matrix row wise:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n + 1; j++)
            scanf("%f", &a[i][j]);

    for (j = 0; j < n - 1; j++)
        for (i = j + 1; i < n; i++)
        {
            if (a[j][j] == 0) {
                printf("Error: Division by zero\n");
                return 1; // Return an error code
            }
            t = a[i][j] / a[j][j];
            for (k = 0; k < n + 1; k++)
                a[i][k] -= a[j][k] * t;
        }

    // Print the upper triangular matrix
    printf("The upper triangular matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n + 1; j++)
            printf("%8.2f ", a[i][j]);
        printf("\n");
    }

    // Perform back substitution
    for (i = n - 1; i >= 0; i--)
    {
        s = 0;
        for (j = i + 1; j < n; j++)
            s += a[i][j] * x[j];
        if (a[i][i] == 0) {
            printf("Error: Division by zero\n");
            return 1; // Return an error code
        }
        x[i] = (a[i][n] - s) / a[i][i];
    }
    

    // Print the solution
    printf("The solution is:\n");
    for (i = 0; i < n; i++)
        printf("x[%d] = %8.2f\n", i + 1, x[i]);

    return 0;
}
