#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));

    int a=(rand()%100)+1;
    int b=0,c,d;
    char player_1[100],player_2[100];
    printf("player-1 name: ");
    scanf("%99s",player_1);
    printf("player-2 name: ");
    scanf("%99s",player_2);
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
            break;
        }
        //b++;

    }
    while(a!=c || a!=d);
    //printf("you guessed the number in %d guesses",b);
}
