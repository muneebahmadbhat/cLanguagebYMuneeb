

//  Q) Write a function to reverse an array

#include <stdio.h>

void revArr (int *arr,int n);
void printarr (int *arr,int n);

int main (){
int arr [] = {12,32,122,321,433};
revArr(arr,5);
printarr(arr,5);
    return 0;
}

void printarr (int *arr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    // printf("\n")
}

void revArr(int *arr, int n){
    for (int i = 0; i <=n/2 ; i++)
    {
    int firstvalue =arr [i];
    int secondvalue = arr[n - i -1];
    arr[i] = secondvalue;
    arr [n-i-1] = firstvalue;
    }
    
}