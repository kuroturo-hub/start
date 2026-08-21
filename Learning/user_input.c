#include <stdio.h>
#include <string.h>
int main(){
    int age=0;
    float gpa= 0.0f;
    char grade= '\0';
    char name[25]="";
    char name_f[25]="";

    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter your grade:");
    scanf(" %c",&grade); 
    printf("Enter your gpa:");
    scanf("%f",&gpa);
    printf("Enter your First name:");
    scanf("%s",&name); 
    getchar(); // to consume the newline character left by previous scanf
    printf("Enter your full name:");
    fgets(name_f,sizeof(name_f),stdin); 
    name_f[strlen(name_f)-1]='\0'; // remove the newline character from the end of the string
    
    printf("%20s\n",name_f);
    printf("%d\n",age);
    printf("%.2f\n",gpa);
    printf("%c\n",grade);
    printf("%s\n",name);
    

    return 0;
}