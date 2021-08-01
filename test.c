#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your obtained marks :    ");
    scanf("%d",& marks);
    if (marks>=80 && marks<=100)
    {
        printf("Obtained grade LETTER is :  'A+'\n");
        printf("Obtained grade POINT is :  5.0\n");
    }
    else if (marks<=79 && marks>=70)
    {
        printf("Obtained grade LETTER is :  'A'\n");
        printf("Obtained grade POINT is :  4.0\n");
    }
    else if (marks<=69 && marks>=60)
    {
        printf("Obtained grade LETTER is :  'B'\n");
        printf("Obtained grade POINT is :  3.5\n");
    }
    else if (marks<=59 && marks>=50)
    {
        printf("Obtained grade LETTER is :  'C'\n");
        printf("Obtained grade POINT is :  3\n");
    }
    else if (marks<=49 && marks>=40)
    {
        printf("Obtained grade LETTER is :  'D'\n");
        printf("Obtained grade POINT is :  2\n");
    }
    else if (marks<=39 && marks>=0)
    {
        printf("Obtained grade LETTER is :  'F'\n");
        printf("Obtained grade POINT is :  0\n");
    }
    return 0;
}
