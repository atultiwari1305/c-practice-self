#include <stdio.h>

struct student{
    char name[50];
    int roll;
    float marks;
    int age;
};

int main(){

    struct student s1, s2;

    printf("Enter informations for 1st student: \n");
    printf("Enter name: ");
    scanf("%s",s1.name);
    printf("Enetr roll: ");
    scanf("%d",&s1.roll);
    printf("Enter marks: ");
    scanf("%f",&s1.marks);
    printf("Enter age: ");
    scanf("%d",&s1.age);

    printf("Enter informations for 2nd student: \n");
    printf("Enter name: ");
    scanf("%s",s2.name);
    printf("Enetr roll: ");
    scanf("%d",&s2.roll);
    printf("Enter marks: ");
    scanf("%f",&s2.marks);
    printf("Enter age: ");
    scanf("%d",&s2.age);

    if(s1.marks>s2.marks){
        printf("Marks of 1st student is more");
    }
    else{
        printf("Marks of 2nd student is more");
    }

    if(s1.age>s2.age){
        printf("Age of 1st student is more");
    }
    else{
        printf("Age of 2nd student is more");
    }
    return 0;
}