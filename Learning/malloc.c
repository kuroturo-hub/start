#include <stdio.h>
#include <stdlib.h>

    // malloc() = A function in C that dynamically allocates 
    //            a specified number of bytes in memory

int main() {
    int number = 0;

    printf("Enter the number of grades: ");
    scanf("%d", &number);

    char *grades = malloc(number * sizeof(char));

    if(grades == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    for(int i = 0; i < number; i++){
        printf("Enter grade #%d: ", i + 1);
        scanf(" %c", &grades[i]);  //here [] also works as an derferance operator that is equivalent to *grades[i]
    }

    for(int i = 0; i < number; i++){
        printf("%c ", grades[i]);
    }

    free(grades); // returning "rented" space back to the OS
    grades = NULL; // avoids dangling pointers

    return 0;
}