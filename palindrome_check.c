/* 
for palindrome,have to understand, 
1. sum of a digit
2.reverse of a digit
*/
#include <stdio.h>
int main()
{
    int a, r,num1,num2=0;
    printf("input a numb to check palindrome: ");
    scanf("%d", &a);
    num1=a;

    while (a != 0)
    {
        r = a % 10;
        num2=num2*10+r;
        a /= 10;
    }
    // palindrome means equal in reverse
    if(num1==num2){
        printf("%d,the number is palindrome\n",num1);
    }else printf("%d,the number is not palindrome\n",num1);

    printf("num1=%d,num2=%d",num1,num2);
}