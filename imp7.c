
#include <stdio.h>

void sum (int n ){
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum +i;
    }
    printf("%d",sum);
    
}
void main (){
    int num= 10;
    sum (num);
}