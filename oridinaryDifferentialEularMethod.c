#include<stdio.h>

float d1(float x, float y);

int main(){
    double x0, xg, h, y0, yg;
    float n;
    int i;
    printf("Enter the value of x0: ");
    scanf("%lf", &x0);
    printf("Enter the value of y0: ");
    scanf("%lf", &y0);
    printf("Enter  the value of x:  ");
    scanf("%lf", &xg);
    printf("Enter the value of h: ");
    scanf("%lf", &h);

    n = (xg - x0)/h;
    printf("\nThe value of n is:  %.2f\n", n);
    for(i=0; i<n; i++){
        yg = y0 + h*d1(x0, y0);
        x0 = x0 + h;
        y0 = yg;
        printf("The value of y (%.2f) =  %.2f\n", x0, y0);
    }
}

float d1(float x, float y){
    return ((2*x) + (3 * y));
}
