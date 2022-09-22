#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("\n Enter the number:");
    scanf("%d", &n);
    printf("\n Factorial of the given number is %d",fact(n));
    return 0;
}
int fact(int n)
{
    if(n>=1)
    {
        return n*fact(n-1);
    }
        else
    {
        return 1;
    }
}

