#include <stdio.h>
#include <conio.h>
void main()
{
    int n[18], i;

    printf("\nEnter the list of 5 numbers :");
    for (i = 0; i <= 4; i++)
        scanf("%d", &n[i]);
    printf("\nThe list in reverse order is \n");
    for (i = 4; i >= 0; i--)
        printf("%d\t", n[i]);
    getch();
}