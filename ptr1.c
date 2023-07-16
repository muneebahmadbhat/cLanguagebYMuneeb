
//  Q) Print the value of 'i'  from its pointer to pointer?


#include <stdio.h>
int main (){
int i = 23;
int *ptr = &i;
int **pptr = &ptr;

printf("The value of i is %d",**pptr);
// printf("The value of i is %d",*ptr);
    return 0;
}