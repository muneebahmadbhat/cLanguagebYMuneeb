#include <stdio.h>
#include <stdlib.h>

// int* functiondangling(){
//     int a,b,sum;
//     a=34;
//     b=364;
//     sum=a+b;
//     return &sum;
// }
int main (){

    // Case 1:de allocation of memory block
int *ptr=(int *)malloc(7* sizeof(int));
ptr[0]=23;
ptr[1]=21;
ptr[1]=11; 
free(ptr);// ptr is now a dangling ptr


// Case 2:Function returning local variable address 
// int * dangptr=functiondangling();// ptr is now a dangling ptr

int * danglingPtr3;
// Case 3:If a variable goes out of scope
{
    int a=121;
    danglingPtr3=&a;
}
// Here variable a  goes out of scope which means danglingptr3 is pointing to a location which is freed and hence danglingptr3 is now a dangling pointer
    return 0;
}