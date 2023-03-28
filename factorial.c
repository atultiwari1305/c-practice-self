#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter your number for factorial: ");
    scanf("%d",&n);
    if(n==0)
    {
        printf("The Factorial of %d is: %d",n,fact);
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("The Factorial of %d is: %d",n,fact);
    }
    return 0;
}