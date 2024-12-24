#include<stdio.h>
int main()
{
       int num1, num2, sum1=0, sum2=0;
       printf("Enter the 1st integer: ");
       scanf("%d",&num1);
       printf("Enter the 2nd integer: ");
       scanf("%d",&num2);

       while(num1 != 0)
       {
              int rem1 = num1%10;
              if(rem1%2==1) sum1 += rem1*2;
              else sum1 += rem1;
              num1 /= 10;

       }
       while(num2 != 0)
       {
              int rem2 = num2%10;
              if(rem2%2==0) sum2 += rem2*2;
              else sum2 += rem2;
              num2 /= 10;

       }
       printf("Summation1: %d\n",sum1);
       printf("Summation2: %d\n",sum2);
       if(sum1>sum2) printf("Summation of the 1st number is greater than the 2nd number");
       else if(sum1<sum2) printf("Summation of the 2nd number is greater than the 1st number");
       else printf("Both summations are equal.");
}
