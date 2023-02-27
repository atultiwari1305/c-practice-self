#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter your number for factorial: ");
    scanf("%d",&n);
    if(n==0)
    {
        printf("The Factorial is: %d",fact);
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("The Factorial is: %d",fact);
    }
    return 0;
}