#include<stdio.h>
int main()
{
       float price, cgpa, f_bill;
       printf("Enter the price of the meal: ");
       scanf("%f",&price);
       printf("Enter the student's CGPA: ");
       scanf("%f",&cgpa);

       if(cgpa>=3.75) f_bill=price-price*0.5;
       else if(cgpa>=3 && cgpa<3.75) f_bill=price-price*0.3;
       else if(cgpa<3) f_bill=price;

       printf("The price of the meal after the discount is: \n%.2f",f_bill);
}
