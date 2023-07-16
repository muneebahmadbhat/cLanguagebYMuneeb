#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("The file name is %s\n",__FILE__);
    printf("Todays date is %s\n",__DATE__);
    printf("Time Now is %s\n",__TIME__);
    printf("Line no is %d\n",__LINE__);
    printf("ANSI is %d\n",__STDC__);
    return 0;
}