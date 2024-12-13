#include <stdio.h>
int main()
{
    int n, c, menu;
    while (menu)
    {
        printf("\n\n\nwhat do you want to see? \n");
        printf("1.highest position of fibonacci \n");
        printf("2.highest value of fibonacci \n");
        printf("3.exit the program\n\n");
        printf("enter your selection: ");
        scanf("%d", &menu);
        if (menu == 1)
        {
            printf("\nenter your highest position of fibonacci: ");
            scanf("%d", &n);
            int k[n];
            k[0] = 0;
            k[1] = 1;
            printf("your fibonacci series: %d %d ", k[0], k[1]);
            for (c = 2; c < n; c++)
            {
                k[c] = k[c - 2] + k[c - 1];
                printf("%d ", k[c]);
            }
        }
        else if (menu == 2)
        {
            printf("\nenter your highest value of fibonacci: ");
            scanf("%d", &n);
            int k[n];
            k[0] = 0;
            k[1] = 1;
            printf("your fibonacci series: %d %d ", k[0], k[1]);
            for (c = 2; c < 3 * n; c++)
            {
                k[c] = k[c - 2] + k[c - 1];
                if (k[c] > n)
                    break; // this line for the highest value of the fibonacci
                printf("%d ", k[c]);
            }
        }
        else if(menu==3){
            printf("\n****** thanks for using the fibonacci program ******\n\n");
            break;
        }
        else printf("\n____give a valid option____ \n");
    }
}
