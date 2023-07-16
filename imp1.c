// Write a C program to create a file of
// numbers given by the user and copy odd
// numbers to odd.dat file and even numbers
// to even.dat file


#include <stdio.h>
int main (){
FILE *fptr, *fptr1;
fptr = fopen ("odd.dat","w");
fptr1 = fopen ("even.dat","w");
int number;
printf("Enter number\n");
scanf ("%d",&number);
for (int i = 1; i <= number; i++)
{
    if (i%2!=0)
    {
        fprintf(fptr,"%d\n",i);
    }else{
        fprintf(fptr1,"%d\n",i);
    }
}
fclose(fptr);


    return 0;
}