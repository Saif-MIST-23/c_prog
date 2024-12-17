#include <stdio.h>

int main()
{
    int option,option_;
    float first_numb,next_num,result;
    printf("you want to 1) calculation,2)exit : ");
    scanf("%d",&option);
    if(option==1){

        printf("enter your first number:");
        scanf("%f",&first_numb);
        printf("you want to 1) addition, 2)substraction,3)multiplication,4)division:");
        scanf("%d",&option_);
        if(option_==1){
            printf("enter your next number: ");
            scanf("%f",&next_num);
            result=first_numb+next_num;
            printf("your result is: %.2f",result);
        }
        else if(option_==2){
            printf("enter your next number: ");
            scanf("%f",&next_num);
            result=first_numb-next_num;
            printf("your result is: %.2f",result);
        }
        else if(option_==3){
            printf("enter your next number: ");
            scanf("%f",&next_num);
            result=first_numb*next_num;
            printf("your result is: %.2f",result);
        }
        else if(option_==4){
            printf("enter your next number: ");
            scanf("%f",&next_num);
            result=first_numb/next_num;
            printf("your result is: %.2f",result);
        }
        printf("\nyou want to 1)continue calculation,2)exit : ");
        scanf("%d",&option);

        while(option==1){

            printf("you want to 1) addition, 2)substraction,3)multiplication,4)division: ");
            scanf("%d",&option_);
            if(option_==1){
                printf("enter your next number: ");
                scanf("%f",&next_num);
                result+=next_num;
                printf("your result is: %.2f",result);
            }
            else if(option_==2){
                printf("enter your next number: ");
                scanf("%f",&next_num);
                result-=next_num;
                printf("your result is: %.2f",result);
            }
            else if(option_==3){
                printf("enter your next number: ");
                scanf("%f",&next_num);
                result*=next_num;
                printf("your result is: %.2f",result);
            }
            else if(option_==4){
                printf("enter your next number: ");
                scanf("%f",&next_num);
                result/=next_num;
                printf("your result is: %.2f",result);
            }
            printf("\nyou want to continue 1) calculation,2)exit : ");
            scanf("%d",&option);

            if(option==2){
                break;
            }
        }
        printf("your final result is: %.2f",result);
        printf("thnks for using");
    }else if(option==2){
        printf("\nthnks for using");
    }
}
