
#include <stdio.h>
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    else
    {
       return fib(n - 1) + fib(n - 2);
    }
}
int main()
{
    int n,i=0;
    printf("Enter a number upto which you want fibonacci series: ");
    scanf("%d", &n);
    printf("The series upto %d is : ", n, fib(i));
    for (int i = 0; i < n; i++)
        {
            printf("%d ",fib(i)); 
        }
    return 0;
}