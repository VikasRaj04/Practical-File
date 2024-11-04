#include<process.h>
#include<stdio.h>

void main()
{
    int i, j, q, c;
    float a[3][3], b[3], temp, k, d;
    printf("Enter the value of matrix A|B (row wise):");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%f",&a[i][j]); 
        }
        scanf("%f", &b[i]);
    }
    for(q = 0; q < 3; q++){
        i = q;
        temp = a[i][i];
        if(temp == 0){
            for(j = 0; j<3; j++){
                d = a[i][j];
                a[i][j] = a[i + 1][j];
                a[i + 1][j] = d;
            }
            d  = b[i];
            b[i] = b[i + 1];
            b[i + 1] = d;
        }
        temp = a[i][i];
        for(j = 0; j < 3; j++){
            a[i][j] = a[i][j] / temp;
        }
        b[i] = b[i] / temp;
        for(i = 0; i < 3; i++){
            if(i != q){
                k = a[i][q];
                for(j = 0; j < 3; j++){
                    a[i][j] = a[i][j] - k * a[q][j];
                }
                b[i] = b[i] - k * b[q];
            }
        }
    }
    printf("\n The matrix A|B will become:");
    for(i = 0; i < 3; i++){
        for(j=0; j< 3; j++){
            printf("%f\t",a[i][j]);
        }
        printf("%f", b[i]);
    }
    printf(" X = %f", b[0]);
    printf(" Y = %f", b[1]);
    printf(" Z = %f", b[2]);
}