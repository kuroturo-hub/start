#include <stdio.h>
#include <stdbool.h>
int main(){
//Today we will learn about variables :)
/* A 
multiline comment
cuz 
WHY NOT?*/
    int age = 17;
    float gpa = 10.0;
    float temp = 27.456;
    double e=2.7182818284590452353602874713527;
    char grade ='A';
    char name[]="Prem";
    bool ok="True";
    bool no=0;
    printf("My age is %d .\n" , age);
    printf("My GPA is %.2f \n",gpa);
    printf("Temp is %.2f degree C here\n", temp);
    printf("Eulers Number %.15lf\n",e);
    printf("I got grade %c\n",grade);
    printf("My name is %s Singh Tomar\n",name);
    printf("OK %d NO %d\n",ok,no);

    if(ok){
        printf("I am fine\n");
    }
    else{
        printf("I am not fine\n");
    }
    return 0;
    
}