#include <stdio.h>
void arrayrev (int arg1 []){
    for (int i = 0; i < 10; i++)
    {
        printf ("%d\t",arg1[10-i-1]);
    }
    printf ("\n");
}
int main (){
    int arr []={10,23,32,4,5,42,34,65,78,87};
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf ("\n");
    arrayrev(arr);
    return 0;
}