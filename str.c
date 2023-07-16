#include <stdio.h>
void printstr (char str[]){
    int i=0;
    while (str[i]!='\0'){
        printf ("%c",str[i]);
        i++;
    }
}
int main (){
    // char str[]={'m','u','n','e','e','b','\0'};
    // char str [] ="muneeb";
    char str [34];
    gets(str);
    printf ("using printf %s\n",str);
    puts(str);
    // printstr(str);
    return 0;
}