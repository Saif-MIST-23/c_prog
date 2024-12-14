/* 
for armstrong,have to understand, 
1. sum of a digit
2.reverse of a digit
3.palindrome digit
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int num1, num2 = 0, n = 0;
    printf("input a numb to find armstrong: ");
    scanf("%d", &num1);

    int temp1 = num1, temp2 = num1;

    while (temp1 != 0)         // this loop is made by me :)
    {
        temp1 = temp1 / 10;
        n++;
    }
    while (temp2 != 0)
    {
        int mod = temp2 % 10;
        num2 += pow(mod, n);
        temp2 /= 10;
    }

    /* armstrong means the sum of every number with their highest power(total digit)
    is same as the digit given */

    if (num1 == num2)
    {
        printf("%d,the number is armstrong\n", num1);
    }
    else
        printf("%d,the number is not armstrong\n", num1);

    printf("num1= %d, num2= %d", num1, num2);
}
