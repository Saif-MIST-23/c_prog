/* 
for palindrome count,have to understand, 
1. palindrome check
*/
#include <stdio.h>
int main()
{
    int initial_value, final_value;
    printf("input initial_value range to find armstrong: ");
    scanf("%d", &initial_value);
    printf("input final range to find armstrong: ");
    scanf("%d", &final_value);

    for (initial_value; initial_value <= final_value; initial_value++)
    {
        int num1, num2 = 0;
        num1 = initial_value;

        while (num1 != 0)
        {
            int r = num1 % 10;
            num2 = num2 * 10 + r;
            num1 /= 10;
        }
        if (initial_value == num2)
        {
            printf("the palindrome number is = %d \n", initial_value);
        }
    }
}