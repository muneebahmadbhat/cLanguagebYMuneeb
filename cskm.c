#include <stdio.h>
void main (){
    int a =4;
    int b =2;
    int c = 0;
    a=c++;
    a=a+b++;
    printf("%d",a);
}