///standalone structure:  

#include <stdio.h>

struct Address
{
    char houseName[25];
    char city[25];
    char streetName[25];
};
struct employee
{
    int Id;
    char name[25];
    float salary;
    struct Address add;
};


int main(){

    struct employee E;
    printf("Enter employee Id: ");
    scanf("%d",&E.Id);
    printf("Enter employee name: ");
    scanf("%s",E.name);
    printf("Enter employee salary: ");
    scanf("%f",&E.salary);
    printf("Enter employee housename: ");
    scanf("%s",E.add.houseName);
    printf("Enter employee city: ");
    scanf("%s",E.add.city);
    printf("Enter employee streetname: ");
    scanf("%s",E.add.streetName);

    printf("The details are: \n");
    printf("Employee Id: %d\n",E.Id);
    printf("Employee name: %s\n",E.name);
    printf("Employee salary: %f\n",E.salary);
    printf("Employee houseName: %s\n",E.add.houseName);
    printf("Employee city: %s\n",E.add.city);
    printf("Employee street name: %s\n",E.add.streetName);

    printf("task completed");
    return 0;
}