#include <stdio.h>
#include <string.h>

void yo(char name[50] , int age){
    printf("Happy Birthday %s , Now you are %d old\n",name, age);
}

int fact(int num){
    int i=num;
    while(i!=1){
        i--;
        num=num*i;
    }
    return num;
}
int main(){
    char n[50]= "";
    int a =0;
    printf("Enter your name: ");
    fgets(n,sizeof(n),stdin);
    n[strlen(n)-1]='\0';

    printf("Enter your age: ");
    scanf("%d", &a);

    yo(n,a);
    printf("%d",fact(12));

    return 0;
}