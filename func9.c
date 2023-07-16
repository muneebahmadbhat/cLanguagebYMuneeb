

//  Write a function to print "Hot" or "Cold" depend on the temperature user enters

#include <stdio.h>

int printTemp (int n);

void main (){
int temp;
printf("Enter temperature\n");
scanf("%d",&temp);
printTemp(temp);
}


int printTemp (int n){
if (n>=18 && n <=60)
{
    printf("Its Damn Hot");
}else if (n<18 && n >=0){
    printf("Its Cold");
}else{
    printf("No-one can survive this temperature");
}

}