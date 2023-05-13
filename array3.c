#include<stdio.h>
int print(int []);
int main()
{
    int ar[]={10,20,30};
    print(ar);
    return 0;
}
int print(int p[])
{
    for(int i=0;i<2;i++)
    {
        printf("%d",p[i]);
    }
    return 0;
}