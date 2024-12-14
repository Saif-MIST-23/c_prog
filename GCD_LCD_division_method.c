#include <stdio.h>
int main()
{
    int num_1, num_2, mod, LCM, menu;
    printf("enter 1st numb: ");
    scanf("%d", &num_1);
    printf("enter 2nd number: ");
    scanf("%d", &num_2);
    int multp = num_1 * num_2;

    // do                                // do-while method
    // {
        z: mod = num_1 % num_2;          
        mod = num_1 % num_2;
        if (mod == 0)
        {
            LCM = multp / num_2;
            printf("GCD is: %d\n", num_2);
            printf("LCM is: %d ", LCM);
            // break;
        }
        else
        {
            num_1 = num_2;
            num_2 = mod;
            goto z;                  //doing with goto function
        }
    // } while (mod != 0);
}