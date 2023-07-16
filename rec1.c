
//  Q) Sum of first n natural numbers using recursions




#include <stdio.h>
int sum (int n);
int main (){
    int n ;
    printf("Enter number");
    scanf("%d",&n);
    printf("The sum of n is %d",sum (n));
    return 0;
}

int sum (int n){
    if (n==1){
        return 1;
    }
    return sum (n-1)+n;
}