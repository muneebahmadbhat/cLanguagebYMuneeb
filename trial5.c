

#include <stdio.h>
void main (){
    int marks [20] = {1,3,4,5,56,65,6,565,65,64,54,54,3,2,423,4,24,32,42,4};
    int length = sizeof(marks)/sizeof(marks[0]);
    int min = marks [0];
    for (int i = 0; i < length; i++)
    {
        if (marks[i]<min)
        {
            min = marks[i];
        }
        
    }
    printf("The minimum marks is %d",min);
}