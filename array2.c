#include<stdio.h>
int f(int a[])
{
    a[1]=3;
    int i=0;
    for(i=0;i<3;i++)
    {
        printf("%d",a[i]);
    }
}
int main()
{
    int a[3]={0,0,0};
    f(a);
    return 0;
}