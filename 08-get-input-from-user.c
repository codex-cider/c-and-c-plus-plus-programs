// Get Input From User

#include <stdio.h>

void main()
{
    int a, b;

    printf("Enter first number ");
    scanf("%d", &a);

    printf("Enter second number ");
    scanf("%d", &b);

    printf("%d + %d = %d", a, b, a + b);
}