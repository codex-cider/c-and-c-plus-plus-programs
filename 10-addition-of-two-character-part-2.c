#include <stdio.h>

void main()
{
    unsigned char a, b, result;

    // range of char -128 , 127
    // range of unsigned char is 0, 255

    a = 'A'; // ASCII value -> 65
    b = 'B'; // ASCII value -> 66

    printf("ASCII value of %c is %d\n", a, a);
    printf("ASCII value of %c is %d\n", b, b);

    result = a + b;

    printf("ASCII value of %c is %d\n", result, result);
}