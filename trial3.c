


#include <stdio.h>
int fact (int n){
    if (n == 1)
    {
        return 1;
    }
    return fact (n-1)*n;
    
}
void main (){
    int num = 10;
    for (int i = 2; i < num; i++)
    {
    printf("The factorial of %d is %d\n",i,fact(i));     
    }
    
    
}