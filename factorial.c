

//  Factorial of a number using while loop


// #include <stdio.h>
// int main (){
//     int n,fact=1,x=1;
//     printf ("Enter the number you want the factorial of\n");
//     scanf("%d",&n);
//     while (fact<=n)
//     {
//         x=x*fact;
//         fact++;
//     }
//         printf ("The Factorial of %d is %d",n,x);
    
//     return 0;
// }


















//  Factorial of a number using for loop
// #include<stdio.h>
// int main (){
//     int n,fact=1,x;
//     printf("Enter the number you want the factorial of:\n");
//     scanf ("%d",&n);
//     for (int x = 1; x <=n; x++)
//     {
//         fact=fact*x;
//     }
//     printf ("The factorial of %d is %d",n,fact);
//     return 0;
// }





























//  Factorial of a number using do while loop
#include <stdio.h>
int main (){
int n,fact=1,x=1;
printf ("Enter the number you want the factorial of\n");
scanf ("%d",&n);
do
{
    fact=fact*x;
    x++;
} while (x<=n);
    printf ("The factorial of %d is %d",n,fact);
    return 0;
}








