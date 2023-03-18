#include<stdio.h>
int main()
{
    int a=1,b=1,temp,n,i;
    printf("Enter the number of terms you want for series: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\t%d",a);
        // printf("\t%d",b);
        temp=a+b;
        a=b;
        b=temp;
    }
    return 0;
}