#include<stdio.h>
void main()
{
    int user_input,comp_input,total=21;
    printf("in this game,we have total 21 matchsticks.\nuser have to pick 1 , 2, 3 or 4 matchsticks at a time.\n");
    printf("the last who picks the stick will be looser.\n\n");
    x:
            printf("chose number of matchsticks you want to pick=");
            scanf("%d",&user_input);
            if(user_input>0 && user_input<5)
            {
                printf("you choose %d matchsticks.\n",user_input);
                total=total-user_input;
                printf("%d sticks left.\ncomputer is picking....\n",total);
                sleep(1);
                comp_input=5-user_input;
                printf("computer is picking %d sticks.\n\n",comp_input);
                total=total-comp_input;

                if(total!=1)
            {
                    printf("your turn\n");
                    goto x;
            }
            else
            {
                printf("only one matchstick is left.\nyou lose the game.\n");
            }
        }
        else
        {
            printf("invalid input.");
        }
}
