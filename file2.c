#include <stdio.h>
int main (){
    FILE *fptr;
    char ch[200];
    fptr = fopen ("My.txt","w");
    fprintf(fptr,"%s","hasbullah");
    fclose(fptr);
    fptr = fopen("my.txt","r");
    fscanf(fptr,"%s",&ch);
    printf("%s",ch);
fclose(fptr);

fptr = fopen ("My.txt","a");
fprintf(fptr,"%s"," Hushesitky");
fclose(fptr);
fptr = fopen ("My.txt","r");
fscanf(fptr,"%s",&ch);
printf("%s",ch);

    return 0;
}