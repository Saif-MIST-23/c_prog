/*
for armstrong,have to understand,
1. sum of a digit
2.reverse of a digit
3.palindrome digit
4. armstrong checkig
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int initial_value, final_value,m=0;
    printf("input initial_value range to find armstrong: ");
    scanf("%d", &initial_value);
    printf("input final range to find armstrong: ");
    scanf("%d", &final_value);

    for (initial_value; initial_value <= final_value; initial_value++)
    {

        int temp1 = initial_value, temp2 = initial_value, num = 0, n = 0;

        while (temp1 != 0) // this loop is made by me :)
        {
            temp1 = temp1 / 10;
            n++;
        }
        while (temp2 != 0)
        {
            int mod = temp2 % 10;
            num += pow(mod, n);
            temp2 /= 10;
        }

        if (initial_value == num)
        {
            printf("the armstrong number is = %d \n", initial_value);
            m++;
        }
    }
    printf("total : %d",m);
}
