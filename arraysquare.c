#include<stdio.h>
int main()
{
    int a[100] ,x, n,i;
    printf("Enter the numbers of elements in array: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the number at a[%d]: ",i);
        scanf("%d",&a[i]);
    }

    printf("What you want to do with elements(1 for sq/2 for cube): ");
    scanf("%d",&x);
    if(x==1)
    {
        printf("The square series is: \n");
        for(i=0;i<n;i++)
        {
            a[i]*=a[i];
            printf("%d\t",a[i]);
        }
    }
    else
    {
        printf("The cubic series is: \n");
        for(i=0;i<n;i++)
        {
            a[i]=a[i]*a[i]*a[i];
            printf("%d\t",a[i]);
        }
    }
    return 0;
}