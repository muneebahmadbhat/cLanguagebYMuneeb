

//  Pointer arithmetic:
// Like base arithmetic operations we can also use pointer arithmetic but there are only 
// 2 arithmetic operations increment & decrement;Whenever we pass ptr++ it increments the pointers

#include <stdio.h>
int main (){
    int age = 22;
    int *ptr = &age;
    printf("The address before increment is %p\n",ptr);
    ptr++;
    printf("The address after increment is %p",ptr);
    return 0;
}