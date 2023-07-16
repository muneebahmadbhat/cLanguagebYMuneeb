#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ptr1,*ptr2;   
    char c;
    ptr1 = fopen("myfile.txt", "r");
    ptr2 = fopen("des.txt","w");
    while ((c=fgetc(ptr1))!=EOF)
    {
        fputc(c,ptr2);
    }
    fclose(ptr1);
    fclose(ptr2);
    printf("Succesfully Copied");
    return 0;
}
