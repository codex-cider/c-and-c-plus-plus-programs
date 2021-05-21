#include <stdio.h>

void main()
{
    char a, b, raw;

    printf("Enter first character ");
    scanf("%c", &a);

    scanf("%c", &raw);

    printf("Enter Second character ");
    scanf("%c", &b);

    scanf("%c", &raw);

    printf("You entered first character %c with ASCII %d\n", a, a);
    printf("You entered second character %c with ASCII %d\n", b, b);
}