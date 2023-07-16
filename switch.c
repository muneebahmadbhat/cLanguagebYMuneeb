#include <stdio.h>
int main (){
    int age;
    int marks;
    printf ("enter your age/n");
    scanf ("%d",&age);
    printf ("enter your marks/n");
    scanf ("%d",&marks);
    switch (age)
    {
    case 1:
        printf ("he is a kid");
        switch (marks)
        {
        case 45:
            printf ("your mark is 45");
            break;
        default:
        printf ("your mark is not 45");
        }
        break;
    case 18:
        printf ("he is a teenager");
        switch (marks)
        {
        case 100:
            printf ("your mark is 100");
            break;
        
        default:
        printf ("your mark is not 100");
        }
        break;
    case 25:
        printf ("he is adultcl");
        switch (marks)
        {
        case 12:
            printf ("your mark is 12");
            break;
        
        default:
        printf ("your mark is not 12");
        }
        break;
    default:
    printf("oops errror loading");
    break;
    }
    return 0;
}