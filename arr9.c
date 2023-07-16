

//  Q) Write a program to print the largest number in an array?

#include <stdio.h>

int main (){
    int arr [] = {12,10,23,45,321,211,345,532,34,765};
            
int length = sizeof(arr)/sizeof(arr[0]);

int max = arr[0];

for (int i = 0; i < length; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }
    
}


printf("Largest element present in given array : %d\n",max);
        
 return 0;        
    }
    
