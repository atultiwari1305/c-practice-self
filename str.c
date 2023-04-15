#include <stdio.h>

struct car{
    char name[50];
    int seats;
    float price;
};

int main(){

int i,n;
struct car c[n];

printf("Enter the total number of cars: ");
scanf("%d",&n);

for(i=0;i<n;i++){
    printf("Enter the data for car no %d: \n",i);
    printf("Enter name: ");
    scanf("%s",c[i].name);
    printf("Enter no of seats: ");
    scanf("%d",&c[i].seats);
    printf("Enter the price: ");
    scanf("%f",&c[i].price);
}

for(i=0;i<n;i++){
    printf("Data about your car[%d] is: \n",i);
    printf("Name: %s\nSeats: %d\nPrice: %f\n",c[i].name,c[i].seats,c[i].price);
}



    return 0;
}