

// Q) Write a program to find the minimum marks among the given marks of 20 students..


// SOL)

#include <stdio.h>
int main (){
    int marks[20]={98,97,76,56,89,96,57,65,34,5};
    int minmarks  = marks[0];
    for (int i = 0; i < 10; i++)
    {
        if(marks[i]< minmarks){
            minmarks = marks[i];
        }
    }
        printf("The lowest marks among 20 student is %d",minmarks);
    
    return 0;
}