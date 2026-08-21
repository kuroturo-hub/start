#include <stdio.h>
#include <string.h>
int main(){
    char name[30]="";
    float price=0.0f;
    int quantity=0;
    char currency='$';
    float total=0.0f;

    printf("What you wanna order? ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0';

    printf("What is the price of each? ");
    scanf("%f", &price);

    printf("How many are you buying? ");
    scanf("%d", &quantity);

    total=price*quantity;

    printf("You have bought %d %s\n",quantity,name);
    printf("Your total is %.2f %c",total,currency);

    return 0;

}