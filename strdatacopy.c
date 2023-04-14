#include <stdio.h>

struct student{
    char name[50];
    int roll;
    float marks;
};

int main(){

    struct student s, s1;

    printf("Enter informations: \n");
    printf("Enter name: ");
    scanf("%s",s.name);
    printf("Enetr roll: ");
    scanf("%d",&s.roll);
    printf("Enter marks: ");
    scanf("%f",&s.marks);

    s1=s;

    printf("Displaying the information: \n");
    printf("Name: ");
    puts(s1.name);
    printf("Roll: %d\n",s1.roll);
    printf("Marks: %.1f",s1.marks);
    return 0;
}