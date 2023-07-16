

//  Q) Write a function to find sum of digits of a number


#include <stdio.h>

int sum (int n);
int main (){
    int num;
    printf ("Enter number\n");
    scanf("%d",&num);
    printf("The sum of %d is %d",num,sum(num));
    return 0;
}

int sum  (int n){
    int sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 = sum1 + i;
    }
    return sum1 ;
    
}