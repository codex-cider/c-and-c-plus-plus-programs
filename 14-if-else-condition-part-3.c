#include <stdio.h>

// Get Result
void main()
{
    int hindi, english, maths, physics, chemistry;
    float totalMarks = 500;
    float percentage = 0;

    printf("All Marks out of 100\n");

    printf("Enter marks of hindi ");
    scanf("%d", &hindi);

    printf("Enter marks of english ");
    scanf("%d", &english);

    printf("Enter marks of maths ");
    scanf("%d", &maths);

    printf("Enter marks of physics ");
    scanf("%d", &physics);

    printf("Enter marks of chemistry ");
    scanf("%d", &chemistry);

    percentage = ((hindi + english + maths + physics + chemistry) / totalMarks) * 100;

    printf("\nPercentage is %.2f\n", percentage);

    if (percentage >= 60)
    {
        printf("First devision");
    }
    else if (percentage >= 50)
    {
        printf("Second devision");
    }
    else if (percentage >= 33)
    {
        printf("Third devision");
    }
    else
    {
        printf("You are fail");
    }
}