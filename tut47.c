#include <stdio.h>
#include <stdlib.h>
int main (){
    // Use of malloc
    // int *ptr;
    // int n;
    // printf ("enter the size of array you want to create\n");
    // scanf ("%d",&n);
    // ptr=(int *) malloc(n*sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf ("enter the value of %d of this array\n",i);
    //     scanf("%d",&ptr[i]);
    // }
    
    // for (int i = 0; i < n; i++)
    // {
    //     printf ("the value at %d of this array is %d\n",i,ptr[i]);
    // }
    // Use of calloc
    // int *ptr;
    // int n;
    // printf ("enter the size of array you want to create\n");
    // scanf ("%d",&n);
    // ptr=(int *) calloc(n,sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf ("enter the value of %d of this array\n",i);
    //     scanf("%d",&ptr[i]);
    // }
    
    // for (int i = 0; i < n; i++)
    // {
    //     printf ("the value at %d of this array is %d\n",i,ptr[i]);
    // }
    
    // // Use of realloc
    // printf ("enter the size of new array you want to create\n");
    // scanf ("%d",&n);
    // ptr=(int *) realloc(ptr, n*sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf ("enter the new value of %d of this array\n",i);
    //     scanf("%d",&ptr[i]);
    // }
    
    // for (int i = 0; i < n; i++)
    // {
    //     printf ("the new value at %d of this array is %d\n",i,ptr[i]);
    // }



 int *ptr;
 ptr=(int *)malloc(3*sizeof(int));   
 for (int i = 0; i < 3; i++)
 {
    printf ("%d\n",ptr[i]);
 }
 ptr=(int *)calloc(3,sizeof(int));   
 for (int i = 0; i < 3; i++)
 {
    printf ("%d\n",ptr[i]);
 }
//  free(ptr);
 ptr=(int *)realloc(ptr,1*sizeof(int));   
 for (int i = 0; i < 1; i++)
 {
    printf ("%d\n",ptr[i]);
 }
 
 free(ptr);
    return 0;
}