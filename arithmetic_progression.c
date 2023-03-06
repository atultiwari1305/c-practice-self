#include<stdio.h>
int main()
{
    int a,d,n,i;
    printf("Enter the first sum: ");
    scanf("%d",&a);
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Enter common difference: ");
    scanf("%d",&d);

    printf("Your arithmetic progression series is: ");
    for(i=0;i<=n;i++)
    {
        
        printf("\tgit %d",a+(i*d));
    }
    return 0;
}