#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fptr;
    char c[100];
    int bufferlength=100;
    int existence=0;
    char line[bufferlength];
    printf("The word to search: \n");
    scanf("%s",c);
    fptr=fopen("a.txt","r");
    while(fgets(line, bufferlength, fptr))
    {
        char *ptr = strstr(line, c);
        if(ptr!=NULL)
        {
            existence=1;
            break;
        }
    }
    fclose(fptr);
    if(existence==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}