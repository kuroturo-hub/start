#include <stdio.h>
void Birthday(int * age);

void main(){
    int age = 25;  
    int *pAge = &age;  //using "address of" operator

    printf("%p\n", &age);
    printf("%p\n", pAge);  //directly printer address

    Birthday(&age);
    printf("%d\n" ,age);

    Birthday(pAge);
    printf("%d\n",age);
}

void Birthday(int * age){
    (*age)++;
}