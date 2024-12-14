/*
for strong check,have to understand,
1. palindrome check
2. armstrong check
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a, r, num1, num2 = 0, fac = 1;
    printf("input a numb to find strong: ");
    scanf("%d", &a);
    num1 = a;

    while (a != 0)
    {
        r = a % 10;
        fac=1;
        for (int i = 1; i <= r; i++)
        {
            fac *= i;
        }
        num2 += fac;
        a /= 10;
    }
    // palindrome means equal in reverse
    if (num1 == num2)
    {
        printf("the number = %d is 'strong'\n", num1);
    }
    else
        printf("the number = %d is 'not strong'\n", num1);

    printf("num1=%d,num2=%d", num1, num2);
}