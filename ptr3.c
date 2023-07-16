


// Q) Write a function to calculate the sum, product & average of 2 numbers.Print
// that average in the main function


#include <stdio.h>


void doWork (int a,int b,int *sum, int *product,int *average){
   *sum  = a+b;
    *product= a*b;
     *average= (a+b)/2;
}


int main (){
    int x = 5, y =10;
int sum,prod,avg;
doWork(x,y,&sum,&prod,&avg);
printf("sum = %d\n,prod = %d\n,avg =%d\n",sum,prod,avg);
    return 0;
}