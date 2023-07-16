
#include <stdio.h>
void main (){
    char str[200];
    printf("Input a sentence\n");
    gets(str);
    printf("Original Output\n");
    puts(str);
    for (int i = 0; str[i]!='\0'; i++)
    {
      if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
      {
        str[i] = str[i] -32;
      }
      
    }
    printf("After checking\n");
    puts(str);
    
}