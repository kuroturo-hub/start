#include <stdio.h>

int main() {

    FILE *pFile = fopen("../output.txt", "w"); // OR fopen("..\\output.txt", "w")

    char text[] = "LOVE U BABE";

    if(pFile == NULL){
        printf("Error opening file\n");
        return 1;
    }

    fprintf(pFile, "%s", text);

    printf("File was written successfully!\n");

    fclose(pFile);
    }