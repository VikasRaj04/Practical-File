#include <stdio.h>
float d1(float x, float y);

void main()
{
    double x0, xg, h, y0, yg, k1, k2, k3, k4, k;
    float n;
    int i;
    printf("Enter the value of x0: ");
    scanf("%lf", &x0);
    printf("Enter the value of y0: ");
    scanf("%lf", &y0);
    printf("Enter the value of x: ");
    scanf("%lf", &xg);
    printf("Enter the value of h: ");
    scanf("%lf", &h);
    n = (xg - x0) / h;
    for (i = 0; i <= n; i++)
    {
        k1 = h * d1(x0, y0);
        k2 = h * d1(x0 + (h / 2), y0 + (k1 / 2));
        k3 = h * d1(x0 + (h / 2), y0 + k2 / 2);
        k4 = h * d1(x0 + h, y0 + k3);
        k = (k1 + 2 * k2 + 2 * k3 + k4) / 6;
        yg = y0 + k;
        x0 = x0 + h;
        y0 = yg;
        printf("The value of y(%.2lf) = %.2lf", x0, y0);
    }
}

float d1(float x, float y)
{
    return (x + (y * y));
}
