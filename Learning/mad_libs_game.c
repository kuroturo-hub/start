#include <stdio.h>
#include <string.h>
int main(){

    char noun[50]="";
    char verb[30]="";
    char adjective1[30]="";
    char adjective2[30]="";
    char adjective3[30]="";
    
    printf("Enter a noun: ");
    fgets(noun,sizeof(noun),stdin);
    noun[strlen(noun)-1]='\0';

    printf("Enter an adjective: ");
    fgets(adjective1,sizeof(adjective1),stdin);
    adjective1[strlen(adjective1)-1]='\0';

    printf("Enter another adjective: ");
    fgets(adjective2,sizeof(adjective2),stdin);
    adjective2[strlen(adjective2)-1]='\0';

    printf("Enter a third adjective: ");
    fgets(adjective3,sizeof(adjective3),stdin);
    adjective3[strlen(adjective3)-1]='\0';

    printf("Enter a verb(ending w/ -ing): ");
    fgets(verb,sizeof(verb),stdin);
    verb[strlen(verb)-1]='\0';

    printf("\nToday I went to a %s class\n",adjective1);
    printf("I saw %s there\n",noun);
    printf("The class was %s %s \n",verb,adjective2);
    printf("I was %s %s \n",verb,adjective3);

    return 0;



}