

// Q) Swap 2 numbers, a & b

#include <stdio.h>


// call by value
void swapV (int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
printf("The value of a is %d & b is %d\n",a,b);
}



//  call by reference
void swapR (int *a,int *b){
    int *temp;
    *temp = *a;
    *a = *b;
    *b = *temp;
printf("The value of a is %d & b is %d\n",*a,*b);
}

int main (){
int a = 5, b =8;
// swapV(a,b);
// printf("The value of a is %d & b is %d\n",a,b);
swapR(&a,&b);
printf("The value of a is %d & b is %d\n",a,b);

    return 0;
}