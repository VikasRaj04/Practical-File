#include <stdio.h>

float f(float x);
int p, q, r, s, n;

int main()
{
    float a, b, c, d, temp;
    printf("Enter the coefficient of x^3: ");
    scanf("%d", &p);

    printf("Enter the coefficient of x^2: ");
    scanf("%d", &q);

    printf("Enter the coefficient of x: ");
    scanf("%d", &r);

    printf("Enter the constant term: ");
    scanf("%d", &s);

    for (int i = -10; i < 10; i++)
    {
        a = i;
        b = i + 1;
        if ((f(a) * f(b)) < 0)
        {
            if (f(b) < f(a))
            {
                temp = a;
                a = b;
                b = temp;
            }
            printf("Enter the number of Iteration: ");
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                c = a - ((b - a) * f(a) / (f(b) - f(a)));
                printf("\n %d iteration \t %f \t %f", i + 1, c,  f(c));
                if(f(c)<0)
                a = c;
                else
                b = c;
            }
        }
    }
}

float f(float x)
{
    return (p * x * x * x + q * x * x + r * x + s);
}