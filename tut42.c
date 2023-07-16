#include <stdio.h>
void func (){
static int myvar;
printf ("The value of myvar is %d\n",myvar);
myvar++;
}
int main (){
    func();
    func();
    func();
    return 0;
}




















// int a=7;
// void func (){
//     printf ("the value of  a is %d",a);
// }
// int main (){
//     printf ("the value of a is %d\n",a);
//     func();
//     return 0;
// }