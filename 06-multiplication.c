#include <stdio.h>

void main()
{

    int a, b, result;
    a = 50;
    b = 30;
    result = a * b;
    printf("Result is %d", result);

    printf("\n");

    // Square of x
    int x, square;
    x = 3;
    square = x * x;
    printf("Square of %d is %d", x, square);

    printf("\n");

    int y, cube;
    y = 3;
    cube = y * y * y;
    printf("Cube of %d is %d", y, square);

    printf("\n");
    // calculate Power of 4
    x = 5;
    result = x * x * x * x;
    printf("Power 4 of %d is %d", x, result);
}