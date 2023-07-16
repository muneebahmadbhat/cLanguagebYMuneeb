#include <stdio.h>
// #include "hello.c"
#define PI 3.14
#define SQUARE(r)r*r
int main (){
    float x = PI;
    int r = 4;
    printf ("The value of pi is %f\n",x);
    printf ("The area of square is %d",PI * SQUARE(r));
    return 0;
}
