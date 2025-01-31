#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1){
        return 1;  
    }
    else{
        return n * factorial(n - 1);
    }
}

int main() {
    int number;
    unsigned long long result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
         result= factorial(number);
        printf("Factorial of %d = %llu\n", number, result);
    }

    return 0;
}

