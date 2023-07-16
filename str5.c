

// Q) Find the salted form of a password entered by user if the salt is "123" & added at the end

#include<stdio.h>
#include<string.h>

void addSalt (char password []);

int main (){
char password [100];
    scanf("%s",password);
    addSalt(password);
    return 0;
}
void addSalt (char password []){
     char salt [] = "123";
    char newpassword [200]; 
    strcpy(newpassword,password);
     strcat(newpassword,salt);
    puts (newpassword);
}