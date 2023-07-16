#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (){

//  Q1) Write a program to calculate the area of square (side is given)
//  Answer:->
// int side;
// printf ("enter number");
// scanf("%d",&side);
// printf ("The area of square is %d",side*side);


//  Q2) Write a program to calculate the area of a circle (side is given)
// float radius;
// printf ("enter number");
// scanf("%f",&radius);
// printf("The area of circle is %f",3.14 * radius * radius);



// Q3) Write a program to calculate perimeter of rectangle.Take sides,a&b,from the user

//  SOL
// int length,breadth;
// printf("Enter the length of rectangle\n");
// scanf("%d",&length);
// printf("Enter the breadth of rectangle\n");
// scanf("%d",&breadth);
// printf("The perimeter of rectangle is %d",2*(length+breadth));




// Q4) Take a number(n) from user & output its cube (n*n*n).

// int n;
// printf("Enter the value of n");
// scanf("%d",&n);
// printf("The cube of n is %d",n*n*n);

//  Q5) Write a program to check if a number is divisible by 2 or not.

// int n;
// printf("Enter a number");
// scanf("%d",&n);
// printf("%d",n%2==0);


//  Q6) Write a program to check if a number is even or odd.
// int n;
// printf("Enter a number");
// scanf("%d",&n);
// printf("%d",n%2==0);

    

// Q7) Print 1 (true) or 0 (false) for following statements:
// a) if its sunday & its snowing -> true
// b) if its monday & its raining -> true
// c) if a number is greater than 9 & less than 100 -> true (2 digit number)

//  Sol a) 
// int isSunday = 2;
// int isSnowing = 2;
// printf("%d",isSunday && isSnowing);

//  Sol b) 
// int isMonday = 0;
// int isRaining = 1;
// printf("%d",isMonday || isRaining);


//  Sol c)
// int n;
// printf("Number to check if its greater than 9 and less than 100\n");
// scanf("%d",&n);
// printf("%d",n>9 && n<100);


//  Q8) Write a program to print the average of 3 numbers.

// Sol)
// int num1=5,num2=6,num3=7;
// printf("%d",(num1+num2+num3)/3);

//  Q9) Write a program to check if given character is digit or not.


// Sol)
// char ch; 
// printf("Enter the character");
// scanf("%c",&ch);
// printf("%d",ch=='1'&& ch=='1');



//  Q10) Write a program to print the smallest number?

//  Sol)

// int num1,num2;
// printf ("Enter first number\n");
// scanf("%d",&num1);
// printf ("Enter second number\n");
// scanf("%d",&num2);
// printf("%d",num1>num2&&num2<num1);

// Note: If num1 is greater than num2 it will print 1 otherwise it will print 0



//  Q11) Print the numbers from 0 to 10?

//  Sol)

// for (int i = 0; i <= 10; i++)
// {
//     printf("%d\n",i);
// }


//  Q12) Print the number from 0 to n,if n is given by the user?
// int n;
// printf ("Enter number\n");
// scanf("%d",&n);
 
// int i =0;
// while (i<=n)
// {
//     printf("%d\n",i);
//     i++;
// }


//  Q13) Print the sum of first n Natural Numbers.Also Print them in reverse.

// int n,sum=0;
// printf("enter number\n");
// scanf("%d",&n);
// for (int i = 1; i <= n; i++)
// {
// sum = sum + i;
// }
//     printf("%d\n",sum);

//     for (int i = n; i >= 1; i--)
//     {
//         printf("%d\n",i);
//     }
    
//  second approach of Q13

// int n;
// printf("Enter the natural number\n");
// scanf("%d",&n);
// int sum = 0;
// for (int i = 0, j = n; i <= n,j>=1; i++,j--)
// {
//     sum = sum + i;
// printf("%d\n",j); 
// }
// printf("The sum of %d is %d\n",n,sum);



//  Q14) Print the table of a number input by the user.
// int n;
// printf("Enter number");
// scanf("%d",&n);
// for (int i = 1; i <= 10; i++)
// {
//     printf("%d * %d = %d\n",n,i,n*i);
// }



//  Q15) Keep taking number as an input from user until user enters an odd number 

// int n ;
// do{
// printf("Enter number\n");
// scanf("%d",&n);
// printf("%d",n);

// if (n%2!=0)
// {
//     break;
// }


// } while (1);
// printf("Hallelujah");

   


// Q16) Keep taking numbers as input from user until user enters a number which is multiple of 7


//  Sol

// int n;
// do
// {
//     printf("Enter Number\n");
//     scanf("%d",&n);
//     printf("%d",n);
//     if (n%7!=0)
//     {
//         break;
//     }
// } while (1);
//     printf("The End");



//  Q17) Print all numbers from 1 to 10 except for 6?

// sol

// for (int i = 1; i <= 10; i++)
// {
//     if (i==6)
//     {
//         continue;
//     }
    
//     printf("%d\n",i);
// }




// Q18) Print all the odd no's from 5 to 50? 

//  SOl)

// for (int i = 5; i <= 50; i++)
// {
//     if (i%2==0)
//     {
//         continue;
//     }
    
//     printf("%d\n",i);
// }


//  Q19) Print the factorial of the number n?
 
//   SOL

// int n,fact=1;
// printf("Enter Number\n");
// scanf("%d",&n);
// for (int i = 1; i <= n; i++)
// {
//     fact = fact * i ;
// }
// printf("The factorial of %d is %d",n,fact);



//  Q20) Print reverse table for a number n?

//  SOL)

// int n;
// printf ("Enter Number\n");
// scanf("%d",&n);
// for (int i = 10; i >=1; i--)
// {
//     printf("%d * %d = %d\n",n,i,n*i);
// }


//  Q21) Calculate the sum of all numbers between 5 and 50 (including 5 and 50)

//  Sol) 
// int sum = 0;
// for (int i = 5; i <= 50; i++)
// { 
//     sum = sum + i ;
// }
// printf("%d",sum);




//  Q22) print the following using nested loop:

        //  *****
        //  *****
        //  *****
        //  *****
        //  *****

// for (int i = 1; i <5; i++)
// {
//     printf("*");
//     for (int j = 0; j < 4; j++)
//     {
//         printf("*");
//     }
//     printf("\n");
// }





//  Q23) Write a program to check if a number is prime or not?

//  int n, i, c = 0;
//   printf("Enter any number n:");
//   scanf("%d", &n);

//   //logic
//   for (i = 1; i <= n; i++) {
//       if (n % i == 0) {
//          c++;
//       }
//   }

//   if (c == 2) {
//         printf("n is a Prime number");
//   }
//   else {
//          printf("n is not a Prime number");
//   }



//  Ternary Operator
// int age;
// printf("Enter your age\n");
// scanf("%d",&age);

// age>=18?printf("Adult"):printf("Child");



//  Nested If

// int n;
// printf("Enter Number");
// scanf("%d",&n);
// if(n>=2){
//     if (n<=10)
//     {
//         printf("Hallelujah");
//     }else
    
// printf("Woooooo");
// }



//  Q24 Write a program to check if a student passed or failed
//  marks>30 is pass
//  marks<=30 is fail

// int marks;
// printf("Enter the marks of the student");
// scanf("%d",&marks);
// if (marks>30&&marks<=100)
// {
//     printf("Congratulations!!!You have passed the exam.");
// }else{
//     printf("Oooooooow!!!You have failed the test");
// }

                    // OR using ternary operator
// marks>=30&&marks<=100?printf("Congratulations!!!You have passed the exam."): printf("Oooooooow!!!You have failed the test");



//  Q25 Write a program to give grades to a student
//  marks < 30 is c
//  30<=marks < 70 is B
//  70<=marks <90 is A
//  90 <=marks <=100 is A+


// SOl
// int marks;
// printf("Enter marks");
// scanf("%d",&marks);
// if (marks <  30)
// {
//     printf("C");
// }else if (marks>=30 && marks < 70)
// {
//     printf("B");
// }else if (marks>=70 && marks < 90)
// {
//     printf("A");
// }else {
//     printf("A++");
// }



// Q26) Write a program to find if a character entered by user is upper case or not

// char ch;
// printf("Enter character\n");
// scanf("%c",&ch);
// if (ch>= 'A' && ch<='Z')
// {
//     printf("Uppercase");
// }else if (ch>='a' && ch <= 'z'){
//     printf("lowercase");
// }else{
//     printf("Not a english letter");
// }



//  Q27) Write a program if the given number is a natural number.
//  Sol)
// int number;
// printf("Enter number\n");
// scanf("%d",&number);
// if (number>=1)
// {
//     printf("It is a natural number");
// }else{
//     printf("It is not a natural number");
// }


//  Q28) Write a program to check if a given number is Armstrong number or not?

//  Sol)

// int n,r,sum=0,temp;    
// printf("enter the number=");    
// scanf("%d",&n);    
// temp=n;    
// while(n>0)    
// {    
// r=n%10;    
// sum=sum+(r*r*r);    
// n=n/10;    
// }    
// if(temp==sum)    
// printf("armstrong  number ");    
// else    
// printf("not armstrong number");  


// Q) Write a program to find the string length without using strlen function

// char str [] = "Muneeb Ahmad";
// int length = 0;
// for (int i = 0; str [ i]!='\0'; i++)
// {
//     length++;
// }
// printf("The length of the string is %d",length);



//  Q) write a program to display the following pattern

                // 1    2   3   4
                //      5   6   7
                //            8   9

//  SOL

// int arr [] = {1,2,3,4,5,6,7,8,9};

// for (int i = 0; i < 3; i++)
// {
//     for (int j = 0; j < 4; j++)
//     {
//      printf("%d\t",arr[i][j]);
//     }
//         printf("");
// }



//  Q)Write a program to display string
// ‘INFINITY’ in the following pattern (using
// ‘‘LOOP’’ control statement) : 
// I
// I N
// I N F
// I N F I
// I N F I N
// I N F I N I
// I N F I N I T
// I N F I N I T Y




// int i,j;
// char str [] ="INFINITY";
//  int len = strlen(str);
// for (i = 0; i < len; i++)
// {
//         for (j = 0; j <=i; j++)
//         {
//                 printf("%c",str[j]);
//         }
//                 printf("\n");
        
// }

// int i,j;

// for (int  i = 1; i <=6; i++)
// {
//         for (int  j = 1; j <=i; j++)
//         {
//                 printf("%d",j);
//         }
//         printf("\n");
// }




for (int i = 4; i>=1; i--)
{
        for (int j = 1; j<=i; j++)
        {
                printf("%d",j);
        }
        printf("\n");
}




return 0;

}


