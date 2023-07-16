

// Q) Write a program in C to find the maximum number between two numbers using a pointer

#include<stdio.h>

int main (){
    int num1 = 5,num2 = 10;
    int *ptr = &num1;
    int *ptr1 = &num2;

    if (ptr <= ptr1){
printf("%d is greater",*ptr);
    }else{  
        printf("%d is greater",*ptr1);
    }
    return 0;
}