#include <stdio.h>
int main ()
{
int arr []={23,32,34,111,231,233};
printf ("value of array at position 3 is %d\n",arr[3]);
printf ("the address of first element of the array is %d\n",&arr[0]);
printf ("the address of first element of the array is %d\n",arr);
printf ("the address of second element of the array is %d\n",&arr[1]);
printf ("the address of second element of the array is %d\n",arr+1);
printf ("the address of third element of the array is %d\n",&arr[2]);
printf ("the address of third element of the array is %d\n",arr+2);
printf ("the value at address of first element of the array is %d\n",*arr);
printf ("the value at address of first element of the array is %d\n",*&arr[0]);
printf ("the value at address of first element of the array is %d\n",arr[0]);
printf ("the value at address of second element of the array is %d\n",*&arr[1]);
printf ("the value at address of second element of the array is %d\n",arr[1]);
printf ("the value at address of second element of the array is %d\n",*(arr+1));
    return 0;
}