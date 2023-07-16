

#include <stdio.h>
int main (){
    int adhaar[5] = {10,2,4,24,5};
    // input value
    int *ptr = &adhaar[0];
    for (int i = 0; i < 5; i++)
    {
        printf("%d index is :",i);
        printf("%d\n",(ptr+i));
    }

    //  Output

    for (int i = 0; i < 5; i++)
    {
        printf("%d index = %d\n",i,*(ptr+i));
    }
    
    
    return 0;
}