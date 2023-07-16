#include <stdio.h>
int main (){
    int math,science;
    printf ("enter the marks of math");
    scanf ("%d/n",&math);
    printf ("enter the marks of science");
    scanf ("%d/n",&science);
    if (math>=40 && science>=40){
printf ("you get the reward of rs 45");
    }
    else if (math>=40){
printf ("you get rs 14");
    }
    else if (science>=40){
        printf("you get rs 15");
    }else {
        printf ("you get nothing");
    }
    return 0;
}