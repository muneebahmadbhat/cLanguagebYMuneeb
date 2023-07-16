//  How to write into a file in C
#include <stdio.h>
#include<string.h>
int main (){
    FILE *ptr;
    char str[34];    

//  Writing in a File


    // char str[34]="Hallelujah";    
    // int a = 10;
    // ptr = fopen("myfile.txt","w");
    // fputs(str,ptr);
    // fprintf(ptr,"%d %s",a,str);
    // fscanf(ptr ,"%s %d",a,str );





// printf("Enter the String\n");
// gets(str);
// fputs(str,ptr);

// for (int i = 0; i != strlen(str); i++)
// {
//     fputc(str[i],ptr);
// }


char ch;



//  Reading in a File
fopen("myfile.txt","r");
ch = fgetc(ptr);
printf("%c",ch);



    fclose(ptr);
    return 0;
}