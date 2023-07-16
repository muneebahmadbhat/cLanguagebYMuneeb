//  Q) Write a function to calculate percentage of a student from marks in science,math & sanskrit


int calculatePercentage (int science,int math,int sanskrit);

#include <stdio.h>
int main (){
    int math,science,sanskrit;
    printf("Enter marks in science\n");
    scanf("%d",&science);
    printf("Enter marks in maths\n");
    scanf("%d",&math);
    printf("Enter marks in sanskrit\n");
    scanf("%d",&sanskrit);
    printf("The percentage of the student is %d",calculatePercentage(math,science,sanskrit));
    return 0;
}
int calculatePercentage (int science,int math,int sanskrit){
    return ((science+math+sanskrit)/3);
}