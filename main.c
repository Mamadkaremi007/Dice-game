#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int k,h,i,r,num,p,sum,c=0,d=0,g;
    p=10;
    r = time(NULL);
    srand(r);
    printf("\t\t\t\t **** WELCOME TO MY GAME ****\n");
    printf("Computer rolled two DICE and you suppose to guess the SUM of them.\n");
    for(i=0;g>0;i++)
    {
        k = rand()%7;
        h = rand()%7;
        sum = k+h;
        printf("Enter zero to finish the game!\n");
        printf("Enter the guess\n");
        scanf("%d",&g);
        if(g == sum)
        {
            printf("BRAVO! You guessed correctly\n");
            p += 10;
            c += 1;
            printf("Score is %d\ncorrect is %d\nincorrect is %d\n",p,c,d);
        }
        else if(g!=sum && g>0)
        {
            printf("Wrong attempt! \n");
            p -= 5;
            d += 1;
            printf("Score is %d\ncorrect is %d\nincorrect is %d\n",p,c,d);
        }
    }
    printf("TOTALLY:\n");
    printf("Score is %d , correct is %d , incorrect is %d\n",p,c,d);
    printf("Thank you for playing.\n");
}
