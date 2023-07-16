

//  Q) Check if a given character is present in a string or not?

#include<stdio.h>
#include<stdlib.h>
int main (){
    char str [100] = "Muneeb Ahmad Bhat";
    char ch ;
    printf("Enter the character you are looking for :");
    scanf("%c",&ch);
    for (int i = 0; str[i] !='\0'; i++)
    {
        if (ch ==str[i]){
            printf("%c is present",ch);
            goto end;
        }
    }
    printf("character is not present");
    end:
    return 0;
}