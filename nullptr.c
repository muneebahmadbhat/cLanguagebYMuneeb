#include <stdio.h>
int main (){
    int a=34;
    int *ptr=&a;
    if (ptr!=NULL)
    {
    printf ("the address of a is %d",*ptr);
    }
else{
    printf ("The pointer is a null pointer and cannot be dereferenced");
}
    
    return 0;
}