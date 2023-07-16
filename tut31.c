#include <stdio.h>
int quiz(int* a,int* b){
    int temp=*a;
    *a=*a+*b;
    *b=temp-*b;
}

int main (){
    int a=4,b=3;
    printf ("the value of a is %d and b is %d\n",a,b);
    quiz (&a,&b);
    printf ("the value of a is %d and b is %d ",a,b);
    return 0;
}