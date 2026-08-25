#include <stdio.h>
int main(){
    FILE *pfile = fopen ("../input.txt","r");
    char buffer[1024] = {0};   //1024 bytes = 1 kb :)

    if (pfile == NULL){
        printf("Could not open the file\n");
        return 1;
    }

    while (fgets(buffer,sizeof(buffer),pfile) != NULL){
        printf("%s",buffer);
    }

    fclose(pfile);

    return 0;
}
