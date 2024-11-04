#include<stdio.h>
#include<math.h>

float f(float x);
float f1(float x);

int main(){

    float a, b, c, d, temp;
    int n;
    for(int i =0; i<10; i++){
        a = i;
        b = i + a;

    if((f(a)*f(b))<0)
    {
        if(abs(f(b))<abs(f(a)))
        a = b;
    }
    printf("Enter the No. of iteration: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        a = a -  (f(a)/f1(a));
        printf("\n %d iteration \t %f \t %f", i + 1, a, f(a));
    }
    }
}

float f(float x){
    return (cos(x) - (x * exp(x)));
}

float f1(float x){
    return (-sin(x) - x * exp(x) - exp(x));
}
