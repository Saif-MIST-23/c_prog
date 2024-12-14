#include <stdio.h>
int main()
{
    int a, r;
    int sum=0;           
    printf("input a numb to reverse: ");
    scanf("%d", &a);
    while (a != 0)
    {
        r = a % 10;
        sum = sum +r;
        a /= 10;
    }
    printf("%d",sum);
}