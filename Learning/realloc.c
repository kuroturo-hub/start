#include <stdio.h>
#include <stdlib.h>

int main(){

// realloc() = Reallocation.
//Resize previously allocated memory
//realloc(ptr, bytes)

int number = 0;
printf("Enter the number of prices: ");
scanf("%d",&number);

float *prices = malloc ( sizeof(float) * number);

if (prices==NULL) {
    printf("Mission Failed !!");            //good practice in case pointer doesn't point to any memory address
    return 1;
}

for (int i =0 ; i<number ; i++){
    printf("Enter price #%d :",i+1);
    scanf("%f",&prices[i]);
}

for (int i =0 ; i<number ; i++){
    printf("%.2f\t",prices[i]);
}

int newNumber = 0;
printf("\nEnter a new number of prices: ");
scanf("%d", &newNumber);

float *temp = realloc (prices, newNumber * sizeof(float));

if (temp==NULL) {
    printf("Mission Failed (cpouldn't reallocate memory) !!\n");  
}
else {
    prices = temp;  //nwo our pointer prices points to this memory rather than previous one
    temp = NULL ; //avoiding dangling pointers 

    for (int i =0 ; i<newNumber ; i++){
    printf("Enter price #%d :",i+1);
    scanf("%f",&prices[i]);
    }
    for (int i =0 ; i<newNumber ; i++){
    printf("%.2f\t",prices[i]);
    }
}

free(prices);
prices=NULL;

return 0;
}