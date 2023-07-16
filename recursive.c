#include <stdio.h>
int fib_recursive(int n){
    if (n==1||n==2){
        return n-1;
    }else {
        return fib_recursive(n-1)+fib_recursive(n-2);
    }
}
int fib_iterative(int n){
   int a=0,b=1;
    for (int i = 0; i < n-1; i++)
    {
    
    b=a+b;
    a=b-a;
    }
    return a;
}
int main (){
int n;
printf ("enter the index of the number you want the fibonacci of :");
scanf ("%d",&n);
printf ("the fibonacci of %d by using iteration is %d\n",n,fib_iterative(n));
printf ("the fibonacci of %d by using recursion  is %d\n",n,fib_recursive(n));
return 0;
}