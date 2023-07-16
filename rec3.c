
//  Q) Write a function to print n terms of the fibonacci sequence

int fibonacci (int fib);


int main  (){
    int fib;
    printf("Enter the number you want the fibonacci of:\n");
    scanf("%d",&fib);
    printf("The fibonacci of a number is %d",fibonacci(fib));
    return 0;
}

int fibonacci (int fib){
    if (fib == 0)
    {
        return 0;
    }
    if (fib == 1)
    {
        return 1;
    }
        

 return fibonacci(fib-1) +fibonacci(fib-2);

}