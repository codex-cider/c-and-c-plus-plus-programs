#include <stdio.h>

void main()
{
    int firstName, secondName;

    printf("Enter first number ");
    scanf("%d", &firstName);

    printf("Enter second number ");
    scanf("%d", &secondName);

    if (firstName > secondName) // 10 > 10
    {
        printf("First number is greater than second number");
    }
    else if (firstName == secondName) // 10 == 10
    {
        printf("Both numbers are equal");
    }
    else
    {
        printf("Second number is greater than first number");
    }
}