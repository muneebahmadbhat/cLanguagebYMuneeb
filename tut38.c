#include <stdio.h>
#include <string.h>
typedef struct student {
    int roll_no;
    char name[33];
}str;
int main (){
str s1,s2;
s1.roll_no=21660120;
strcpy(s1.name,"muneeb ahmad bhat");
s2.roll_no=21660121;    
strcpy(s2.name,"aijaz ahmad bhat");
printf ("the roll no of student 1 is %d\n",s1.roll_no);
printf (" first student name is %s\n",s1.name);
printf ("the roll no of student 2 is %d\n",s2.roll_no);
printf (" second student name is %s\n",s2.name);
    // typedef <previous_name> <alias_name>;
    // typedef unsigned long ul;
    // ul l1,l2,l3;
    return 0;
}