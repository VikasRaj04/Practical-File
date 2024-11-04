#include <stdio.h>
#include <math.h>

float f(float x);
float f1(float x);
int p, q, r, s, n;

int main()
{
    float a, b, c, d, temp;
    printf("Enter the coefficient of x^3: ");
    scanf("%d", &p);

    printf("Enter the coeffient of x^2: ");
    scanf("%d", &q);

    printf("Enter the coefficent of x: ");
    scanf("%d", &r);

    printf("Enter the constant term: ");
    scanf("%d", &s);

    for (int i = -10; i < 10; i++)
    {
        a = i;
        b = i + 1;
        if ((f(a) * f(b)) < 0)
        {
            if (abs(f(b)) < abs(f(a)))
            {
                a = b;
            }
            printf("Enter the Number of iteration: ");
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                a = a - (f(a) / f1(a));
                printf("\n %d iteration \t %f \t %f", i + 1, a, f(a));
            }
        }
    }
}

float f(float x)
{
    return (p * x * x * x + q * x * x + r * x + s); // f(x) = ax^3 + bx^2 + cx + d
}

float f1(float x)
{
    return (3 * p * x * x + 2 * q * x + r); //  f'(x) = 3ax^2 + 2bx + c
}