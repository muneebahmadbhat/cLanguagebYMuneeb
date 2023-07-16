

// Q) Write a program that inputs user's name & print its length.

#include <stdio.h>

int countstr (char arr[]){
    int count = 0;
    for (int i = 0; arr[i] !='\0'; i++)
    {
        count ++;
    }
    return count-1;
}


int main (){
    char str [150] ="Muneeb Ahmad Bhat";
    fgets (str,20,stdin);
    printf("Length is %d",countstr(str));
    return 0;
}