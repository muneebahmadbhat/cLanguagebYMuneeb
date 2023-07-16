#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int grn()
{
    srand(time(NULL));
    return rand() % 2;
}
int main()
{
    int n, m, i = 0, j = 0;
    for (int l = 0; l <= 2; l++)
    {
        printf("0=rock\n1=paper\n2=scissor\n");
        printf("enter your number accordingly between 0 to 2\n");
        scanf("%d", &n);
        if (n == 0)
        {
            printf("you choose rock\n");
        }
        if (n == 1)
        {
            printf("you choose paper\n");
        }
        if (n == 2)
        {
            printf("you choose scissor\n");
        }
        m = grn();
        if (m == 0)
        {
            printf("computer choosen rock\n");
        }
        if (m == 1)
        {
            printf("computer choosen paper\n");
        }
        if (m == 2)
        {
            printf("computer choosen scissor\n");
        }
        if (n == m)
        {
            printf("chance is tied\n");
            i++;
            j++;
        }
        if ((n == 0 && m == 2) || (n == 1 && m == 0) || (n == 2 && m == 1))
        {
            printf("you won this chance\n");
            i++;
        }
        if ((n == 0 && m == 1) || (n == 1 && m == 2) || (n == 2 && m == 0))
        {
            printf("computer won this chance\n");
            j++;
        }
    }
    if (i > j)
    {
        printf("you won game\n");
    }
    else if (i < j)
    {
        printf("computer won game\n");
    }
    else if (i == j)
    {
        printf("game is tied\n");
    }

    return 0;
}
// this is also code to play game