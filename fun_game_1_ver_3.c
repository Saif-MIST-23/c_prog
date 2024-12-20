#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int t_player, tot_round, curr_round = 1, i, p_guess,temp1,NoOne=0,range_define;

    printf("input your highest range of number that you want to play: ");
    scanf("%d", &range_define);
    printf("total round: ");
    scanf("%d", &tot_round);
    printf("total player: ");
    scanf("%d", &t_player);


    char players[t_player][100], score[t_player];
    printf("\nenter players name---\n");

    for (i = 0; i < t_player; i++)
    {
        printf("player-%d: ",i+1);
        scanf("%s",players[i]);
    }

    for(i=0; i<t_player; i++)
    {
        score[i]=0;
    }

    while (curr_round <= tot_round)
    {
        srand(time(0));
        int c_guess = (rand() % range_define) + 1;

        if(curr_round==tot_round) printf("\nREMINDER: The Last Round..........\n");

        printf("\nROUND = %d  \n", curr_round);
        printf("\n------Guess Number from 0 to %d---------\n\n",range_define);

        do
        {
            for(i=0; i<t_player; i++)
            {
                printf("%s guess: ",players[i]);
                scanf("%d",&p_guess);

                if(c_guess<p_guess)
                {
                    printf("lower\n\n");
                }
                else if(c_guess>p_guess)
                {
                    printf("higher\n\n");
                }
                else if(c_guess==p_guess)
                {
                    printf("\ncongratulations, %s win round-%d\n\n",players[i],curr_round);
                    score[i] += 1;
                    break;
                }
            }
        } while (c_guess != p_guess);

        printf("score---\n");
        for(i=0 ; i<t_player; i++) 
            printf("%s = %d\n",players[i],score[i]);

        if (curr_round == tot_round)         // finishing round
        {
            temp1 = 0;                 
            for(i=0; i<t_player; i++)          // searching minimum one highest value
            {
                if(score[temp1]<score[i])
                    temp1=i;
            }

            printf("\nwinner winner, chicken dinner----- ");
            
            for(i=0; i<t_player; i++)          // searching for multiple highest value
            {
                if(score[temp1]==score[i])
                    printf(" %s ",players[i]);
            }

            for(i=0; i<t_player; i++)
            {
                if(score[i]==0)
                {
                    printf("\nDuck Specialist---- (murgir gu kha) --- %s  ",players[i]);
                    NoOne++;
                }
            }
            if(NoOne==0)
                printf("\n\nWOW, No Duck ! \n");

            printf("\n\n\n               THE END           \n\n\n");
        }
        curr_round++;
    }
}