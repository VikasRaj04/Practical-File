#include<stdio.h>

int main()
{
    int n, i, j;
    float mult, sum = 0, x[10], f[10], a;

    printf("Enter number of Sample Points: ");
    scanf("%d", &n);

    printf("Enter all value of X and corresponding functional value: \n");
    printf("X F(x)\n");
    for(i = 0; i<n; i++)
    scanf("%f %f", &x[i], &x[i]);

    printf("\nEnter Your X for Calculation: ");
    scanf("%f", &a);

    for(i = 0; i<=n-1; i++){
        mult =  1;
        for(j = 0; j<=n-1; j++){
            if(j != i)
            mult = mult * (a - x[j])/(x[i] - x[j]);
        }
        sum += mult * f[i];
    }
    printf("The Estimated value of f(x) = %f", sum);
    return 0;
}