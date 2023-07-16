#include <stdio.h>
#include <string.h>
int main (){
    // char s1[]="muneeb";
    // char s2[]="aijaz";
    // char s3[3433];
    // printf ("the strcmp for s1,s2 returned %d",strcmp(s1,s2));
    // puts (strcat(s1,s2));
    // printf ("the length of s1 is %d\n",strlen(s1));
    // printf ("the length of s2 is %d\n",strlen(s2));
    // printf ("the reverse string of s2 is :%s\n",strrev(s2));
    // printf ("the reverse string of s1 is :");
    // puts (strrev(s1));
    // strcpy (s3,strcat(s1,s2));
    // puts (s3);




                // QUICK QUIZ
                char name1[12];
                char name2[23];
                char name3[23]="is a friend of";
                printf ("enter the name of the first person\n");
                scanf ("%s",name1);
                printf ("enter the name of the second person\n");
                scanf ("%s",name2);
         puts (strcat(name1,(strcat(name3,name2))));       
    return 0;
}