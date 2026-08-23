#include <stdio.h>
#include <string.h>

typedef struct{
               char name[50];
               int year;
               int price;
} Car;

void printcar(Car cars);

void main(){
    Car car1 = {"Mustang",2025,3200};
    Car car2 = {"Corvette",2026,6800};

    printcar(car1);
    printcar(car2);

    Car cars[] ={{"Challenger",2024,2900},
               {"Ferrari",2026,6767}};
    int counter = sizeof(cars)/sizeof(cars[0]);

    for (int i=0;i<counter;i++){
        printf("%s %d $%d\n",cars[i].name,cars[i].year,cars[i].price);
    }

}
void printcar(Car cars){
    printf("%s %d $%d\n",cars.name,cars.year,cars.price);
}