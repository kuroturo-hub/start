#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    printf("%d",rand());
    printf("\n%d",RAND_MAX);

    int rand_num = rand() % 2;
    printf("\n%d",rand_num); //gives a random number either  0 or 1
    
    int rand_num2 = rand()% 2 +1;
    printf("\n%d",rand_num2);  //gives a random number either 1 or 2

    int min = 50 , max =100;  //to get a random number in a range
    int num = (rand() % (max-min +1)) + min; //same logic as above
    printf("\n%d",num);





    return 0;
}