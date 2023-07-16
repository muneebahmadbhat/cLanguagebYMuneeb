#include <stdio.h>
#include <string.h>
int main (){
 int a=345;
 float b=34.5;
 void *ptr;
 ptr=&a;
//  printf("The value of a is %d",*ptr);  This will not print because we cannot dereference void ptrs like this 
 printf("The value of a is %d\n",*((int*)ptr));   
 ptr=&b;
 printf("The value of b is %f\n",*((float*)ptr));   
    return 0;
}