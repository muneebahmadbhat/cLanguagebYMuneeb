#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[43];
};
int main (){
    struct student muneeb,aijaz,musa;
    muneeb.id=1;
    aijaz.id=2;
    musa.id=3;
    muneeb.marks=455;
    aijaz.marks=457;
    musa.marks=465;
    muneeb.fav_char='p';
    aijaz.fav_char='p';
    musa.fav_char='p';
strcpy(muneeb.name,"muneeb ahmad bhat");
     printf ("the full name of muneeb is %s\n",muneeb.name);

    // printf ("the id of muneeb is %d\n",muneeb.id);
    // printf ("the marks of muneeb is %d\n",muneeb.marks);
    // printf ("the fav_char of muneeb is %c\n",muneeb.fav_char);
    // printf ("the id of aijaz is %d\n",aijaz.id);
    // printf ("the marks of aijaz is %d\n",aijaz.marks);
    // printf ("the fav_char of aijaz is %c\n",aijaz.fav_char);
    // printf ("the id of musa is %d\n",musa.id);
    // printf ("the marks of musa is %d\n",musa.marks);
    // printf ("the fav_char of musa is %c\n",musa.fav_char);
    return 0;
}