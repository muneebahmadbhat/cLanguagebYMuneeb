

#include <stdio.h>
int main (){
    char str[100] = {"Muneeb Ahmad Bhat"};
char str1[100];
int i,length = 0;
for (i = 0; str[i]!='\0'; i++)
{
        str1[i] = str [i];
        length++;
}
str1[i]='\0';
printf("The second str : %s\n",str1);
printf("The length of the resultant string is %d",length);

    return 0;
}