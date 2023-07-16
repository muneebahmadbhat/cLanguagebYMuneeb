//  Factorial of n using recursion


#include <stdio.h>


int factorial (int n);

int main (){
    int n =10,a=2,b=3,c=4;
    printf("The factorial of 10 is %d\n",factorial(n));
    printf("The factorial of 2 is %d\n",factorial(a));
    printf("The factorial of 3 is %d\n",factorial(b));
    printf("The factorial of 4 is %d\n",factorial(c));
    return 0;
}

int factorial (int n){
    if (n==0 || n==1){
        return 1;
    }
    return factorial(n-1)*n;
}
