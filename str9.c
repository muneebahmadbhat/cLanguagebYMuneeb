

//  Q) Write a program to replace lowercase letters with uppercase & viceversa in a string?

#include<stdio.h>
#include<string.h>

void lowertoupper(char str []){
for (int i = 0; str[i]!='\0'; i++)
{
    if (str[i]>='a'&&str[i]<='z')
    {
    str[i] = str[i]-32;
    }
    
}
puts(str);

}

void uppertolower(char str[]){
for (int i = 0; str[i]!='\0'; i++)
{
    if (str[i]>='A'&&str[i]<='Z')
    {
        str[i] = str[i]+32;
    }
    
}
    puts (str);

}


void main (){
    char str [] = "muneeb ahmad bhat";
    // char str1 [] = "MUNEEB AHMAD BHAT";
lowertoupper(str);
uppertolower(str);
}