// Write a program to generate Fibonacci
// series using recursion


#include <stdio.h>
int fib (int n ){
    if (n==0)
    {
        return 0;   
    }if (n==1)
    {
        return 1;
    }
    return fib(n-1)+fib(n-2);
    
    
}

void main (){
    int num;
    printf("enter the number you want fibonacci of:");
    scanf("%d",&num);
    printf("the fibonacci of %d is %d",num,fib(num));
}