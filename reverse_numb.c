/*
for reverse of a digit, have to understand-
1.sum of a digit
*/
#include <stdio.h>
int main()
{
    int a, r;
    // int sum=0;           //sum method
    printf("input a numb to reverse: ");
    scanf("%d", &a);
    while (a != 0)
    {
        r = a % 10;
        // sum = sum*10 +r;  // sum method
        printf("%d", r);     // my special method :)
        a /= 10;
    }
    // printf("\n%d",sum);
}