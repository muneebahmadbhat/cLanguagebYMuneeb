

//  Q) Write a program to store the data of 3 students;


#include<stdio.h>
void main (){
    struct student{
        char *str;
        int rollno;
        float cgpa;
    }s1,s2,s3;

    s1.rollno = 23;
    s2.rollno = 123;
    s3.rollno = 1223;
    s1.cgpa = 9.8;
    s2.cgpa = 8.8;
    s3.cgpa = 5.8;
    s1.str = "muneeb ahmad bhat";
    s2.str = "aijaz ahmad bhat";
    s3.str = "shams ahmad bhat";
    printf("%s\n",s1.str);
    printf("%d\n",s1.rollno);
    printf("%f\n",s1.cgpa);
    printf("%s\n",s2.str);
    printf("%d\n",s2.rollno);
    printf("%f\n",s2.cgpa);
    printf("%s\n",s3.str);
    printf("%d\n",s3.rollno);
    printf("%f\n",s3.cgpa);
}