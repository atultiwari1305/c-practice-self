#include <stdio.h>
int main()
{
    FILE *fptr=fopen("a.txt","a");
    char c;
    printf("Enter the line of text, press ^z to stop: ");
    while((c=getchar())!=EOF)
    {
        putc(c,fptr);
    }
    fclose(fptr);
}
