


//  Q) Write a program in C to print all the letters in english alphabet using a pointer.

#include <stdio.h>

int main (){
int alph[26];   
char ch = 'a' ;
char *ptr = &ch;
for (int i = 0; i < 26; i++)
{
    printf("%c\n",*(ptr+i));
}

    return 0;
}

