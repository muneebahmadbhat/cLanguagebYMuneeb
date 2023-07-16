#include <stdio.h>
int callbyvalue (int a,int b){
return a+b;
}
int callbyreference(int* address){
*address=34;
}
int main (){
//     int x=3,y=5;
//    printf (" the value of x and y by call by value is %d",callbyvalue (x,y));
int n=4;
printf ("the value of address now is %d\n",n);
callbyreference (&n);
printf ("second time the value of address is %d\n",n);

    return 0;
}