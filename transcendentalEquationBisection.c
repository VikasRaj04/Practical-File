#include <stdio.h>
#include <math.h>

float f(float x);

int main()
{
    float a, b, c, d, temp;
    int n;
    for (int i = 0; i < 10; i++)
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

            printf("Enter the number of iteration :");
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                c = (a + b) / 2;
                printf("\n %d iteration \t %f \t  %f", i + 1, c, f(c));
                if (f(c) < 0)
                {
                    a = c;
                }
                else
                {
                    b = c;
                }
            }
        }
    }
}

float f(float x)
{
    return (3 * (x)-cos(x) - 1);
}
