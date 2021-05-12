#include <stdio.h>

void main()
{
    int firstNumber, secondNuber, result;
    firstNumber = 10;
    secondNuber = 30;
    result = firstNumber * secondNuber;
    printf("Result is %d", result);

    printf("\n");

    int number;

    // Square of any number
    // X ki power 2 = x * x;
    number = 5;
    result = number * number;
    printf("Square of %d is %d", number, result);

    printf("\n");

    // Cube of any number
    // X ki power 3 = x * x * x;
    number = 2;
    result = number * number * number;
    printf("Cube of %d is %d", number, result);
}