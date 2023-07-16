

// Q) Write a program to enter price of 3 items & print their final cost with gst.


#include <stdio.h>
int main (){
float items [3] = {100.0,200.0,300.0};
printf("Price of first item is %f\n",items[0]);
printf("Price of second item is %f\n",items[1]);
printf("Price of third item is %f\n",items[2]);

printf("Final cost of first item is %f\n",items[0]+(0.18*items[0]));
printf("Final cost of second item is %f\n",items[0]+(0.18*items[1]));
printf("Final cost of third item is %f\n",items[0]+(0.18*items[2]));

    return 0;
}