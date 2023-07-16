#include <stdio.h>
void main (){
    int a = 0,b=1,n,temp;
    printf("ENter the no you want fibonacci of");
    scanf("%d",&n);
    for (int i = 0; i <= n-1; i++)
    {
        b = a+b;
        a=b-a;
    }
    printf("the fibonacci of %d is %d",n,a);
}