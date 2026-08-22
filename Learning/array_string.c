#include <stdio.h>
#include <string.h>
int main(){
    char fruits[][10] = {"Apple", "Banana", "Coconut"};   //each element can have max lenght of 10(no . of elements 10)

    char fruit[][10] = {                                   //it is stored like this 
    {'A', 'p', 'p', 'l', 'e', '\0', '\0', '\0', '\0'},
    {'B', 'a', 'n', 'a', 'n', 'a', '\0', '\0', '\0', '\0'},
    {'c', 'o', 'c', 'o', 'n', 'u', 't', '\0', '\0', '\0'}
    };

    int size = sizeof(fruits) / sizeof(fruits[0]);

    for(int i=0; i < size; i++){     //pritning each string
        printf("%s\n", fruits[i]);
    }

    printf("\n");

    for(int i=0; i < size; i++){       //printing only the first letter (or any letter of ur choice)
        printf("%c\n", fruits[i][0]);
    }

    printf("\n");

    fruits[0][0]= 'e';
    fruits [0][4]= 'A';

    fruits[1][0]= 'a';
    fruits [1][5]='B';

    fruits[2][0]= 't';
    fruits [2][6]='c';

    for(int i=0; i < size; i++){     
        printf("%s\n", fruits[i]);
    } 

    printf("\n");

    char names[4][25] = {0};
    int row = sizeof(names)/sizeof(names[0]);

    for(int i=0; i< row; i++){
        printf("Enter a name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i])-1] ='\0';
    }

    for (int i=0;i<row;i++){
        printf("%s ",names[i]);
    }
}