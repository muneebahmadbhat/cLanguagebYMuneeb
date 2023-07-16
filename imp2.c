// Write a C program to implement STRING
// COPY operation that copies a string ‘‘str1’’
// to another string ‘‘str2’’ without using
// library function. 


#include <stdio.h>
int main (){
    char str1 [100] ="Muneeb Ahmad Bhat";
    char str2[100];
    int i = 0;
    for(i = 0 ;str1[i]!='\0';i++){
        str2[i] = str1 [i];
    }
    str2[i] = '\0';
    printf("str2 = %s",str2);
    return 0;
}