#include<stdio.h>
int print(int*);
int main()
{
    int ar[]={10,20,30};
    print(ar+1);
    return 0;
}
int print(int *p)
{
    printf("%d",*p);
    return 0;
}