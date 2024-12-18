#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int x,y,i=1,m=0,n=0;

    do
    {
        printf("1. play  \n2. exit: ");
        scanf("%d",&x);
        if(x==1)
        {
            printf("how many rounds u want to play? : ");
            scanf("%d",&y);
            int i=1;
            char player_1[100],player_2[100];
            printf("player-1 name: ");
            scanf("%99s",&player_1);
            printf("player-2 name: ");
            scanf("%99s",&player_2);
            while(i<=y)
            {

                srand(time(0));
                int a=(rand()%100)+1;
                int b=0,c,d;
                printf("\nround=%d",i);
                printf("\nguess a random number between 0 to 100\n");

                do
                {

                    printf("\n%s's guess: ",player_1);
                    scanf("%d",&c);
                    if(a<c)
                    {
                        printf("\nlower\n");
                    }
                    else if(a>c)
                    {
                        printf("\nhigher\n");
                    }
                    else
                    {
                        printf("\ncongratulations, %s win\n\n",player_1);
                        m++;
                        break;
                    }
                    printf("\n%s's guess:  ",player_2);
                    scanf("%d",&d);
                    if(a<d)
                    {
                        printf("\nlower\n");
                    }
                    else if(a>d)
                    {
                        printf("\nhigher\n");
                    }
                    else
                    {
                        printf("\ncongratulations, %s win\n",player_2);
                        n++;
                        break;


                    }
                }
                while(a!=c || a!=d);

                if(i==y)
                {
                    if(m>n)
                    {
                        printf("%s win the match",player_1);
                    }else
                    {
                        printf("%s win the match",player_2);
                    }
                    break;
                }
                printf("\n%s=%d\n%s=%d",player_1,m,player_2,n);
//                printf("\n1. play  \n2. exit: ");
//                scanf("%d",&x);
                i++;
            }
            if(i==y){
                break;
            }
        }

        else if(x==2)
        {
            printf("thanks");
            break;
        }
    }
    while(x==1);


}
