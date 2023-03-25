#include<stdio.h>
int main()
{
    int a[100] , n,i;
    printf("Enter the numbers of elements in array: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the number at a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}