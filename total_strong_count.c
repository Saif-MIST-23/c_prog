/*
for total  strong count,have to understand,
1. total armstrong count
2. strong check
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int initial_value, final_value;
    printf("input initial_value range to find strong: ");
    scanf("%d", &initial_value);
    printf("input final range to find strong: ");
    scanf("%d", &final_value);

    for (initial_value; initial_value <= final_value; initial_value++)
    {

        int num1, num2 = 0, fac = 1;

        num1 = initial_value;

        while (num1 != 0)
        {
            int r = num1 % 10;
            fac = 1;
            for (int i = 1; i <= r; i++)
            {
                fac *= i;
            }
            num2 += fac;
            num1 /= 10;
        }

        if (initial_value == num2)
        {
            printf("the strong number is = %d  \n", initial_value);
        }
    }
}
/*
there are just 4 strong numb in whole--
1
2
145
40585
*/