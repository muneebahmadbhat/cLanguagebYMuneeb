
//  Q) Write a function  to calculate area of a square, a circle & a rectangle





#include <stdio.h>

 
int square(int side);
int rectangle (int length,int breadth);
float circle(float radius);

 int main (){
    int side,length,breadth;
    printf("Enter length\n");
    scanf("%d",&length);
    printf("Enter bradth\n");
    scanf("%d",&breadth);
    printf("Enter side\n");
    scanf("%d",&side);


float radius;
printf ("Enter radius");
scanf("%f",&radius);


float areaOfcircle = circle (radius);
printf("The area of circle is %f\n",areaOfcircle);


   int areaOfsquare = square (side);
   printf("The area of square is %d\n",areaOfsquare);




  int areaOfrectangle = rectangle(length,breadth);
  printf("The area of rectangle is %d\n",areaOfrectangle);



    return 0;
 }

int square (int side){
    return side * side;
}
int rectangle (int length,int breadth){
    return length * breadth;
}

float circle(float radius){
    return 3.14 * radius * radius;
}