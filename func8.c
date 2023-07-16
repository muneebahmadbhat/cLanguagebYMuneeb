

//  Q) Write a function to find square root of a number?


#include <stdio.h>
#include <math.h>


float square (float n);

int main (){
    int num;
    printf ("Enter number");
    scanf("%d",&num);
    printf("The sqaure of %d is %f",num,square(num));
    return 0;
}

float square (float n){
    float squareR = sqrt(n);
    return squareR;
}