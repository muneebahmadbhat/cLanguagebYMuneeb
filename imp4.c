

//  Write a program to convert all lowercase to uppercase

#include<stdio.h>
int main (){
    char str [100];
    printf("input a sentence\n");
    gets(str);
    printf("Original sentence\n");
    puts(str);
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i]>='a'&&str[i]<='z')
        {
            str[i] = str[i]-32;
        }
        
    }
    printf("after converting\n");
    puts(str);
    
    return 0;
}