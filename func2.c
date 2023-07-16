//  Q) Write a function that prints namaste if user is indian and bonjour if user is french

//  SOL)


#include <stdio.h>
void indian ();
void french ();
int main(){
    char ch;
    printf("Enter a character\n");
    scanf("%c",&ch);
    if (ch=='i')
    {
        indian();
    }else if (ch=='f'){
        french();
    }else{
        printf("Invalid Alphabet");
    }
    
    return 0;
}
void indian (){
    printf("Namaste");
}
void french (){
    printf("Bonjour");
}