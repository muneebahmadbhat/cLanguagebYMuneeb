#include <stdio.h>
// #include <stdlib.h>
int main (){
    FILE *fptr;
    char ch [200];
    fptr=fopen("My.txt","r");
    fscanf(fptr,"%s",&ch);
    printf("%s",ch);
        fclose(fptr);
    return 0;
}