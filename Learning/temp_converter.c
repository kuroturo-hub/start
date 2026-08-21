#include <stdio.h>
int main() {
    float c=0.0f, f=0.0f;
    int choice=0;
    printf("Press 1 for Celcius ---> Fahrenheit\n");
    printf("Press 2 for Fahrenheit ---> Celcius\n");
    scanf("%d", &choice);
    if(choice==1){
        printf("Enter the temperature in Celcius: ");
        scanf("%f",&c);
        f=(c*9/5)+32;
        printf("The temperature in Fahrenheit is: %.2f\n", f);

    }
    else if(choice==2){
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f",&f);
        c=(f-32)*5/9;
        printf("The temperature in Cels1ius is: %.2f\n", c);
    }
    else{
        printf("Invalid choice, Try again\n");
    }

    return 0;
   
}