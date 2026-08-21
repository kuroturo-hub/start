#include <stdio.h>
#include <stdbool.h>
int main(){
    int age=17;
    float price=67.67;
    double pi=3.14159265359;
    char currency='$';
    char name[]="Prem Singh Tomar";
    printf("%s is %d years old and he bought a cap wroth %.2f %c.\nHis favourite irrational number is Pi:%.12lf\n",
    name,age,price,currency,pi);

    int num1=1;
    int num2=10;
    int num3=-100;
    int num4=1000;
    float u1=19.4;
    float u2=-118.331;
    float u3=67.67676767;

    printf("%+030d\n",num1);
    printf("%+15d\n",num2);
    printf("%0+30d\n",num3);
    printf("%+-30d\n",num4);

    printf("%+05f\n",u1);
    printf("%-+02.2f\n",u2);
    printf("%.3f\n",u3);



    return 0;
}