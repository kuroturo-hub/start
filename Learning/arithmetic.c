#include <stdio.h>
int main(){
    int x=34;
    int y=45;
    int z=0;
    int p=0;
    z=x+y;
    p=y-x;
    printf("Sum: %d\nDifference: %d\n",z,p);

    //z=y/x;
    //printf("Divison: %f\n",z);

    p=y%x;
    printf("Remainder: %d\n",p);

    int u=100;
    u++;
    printf("%d\n",u);
    float v=100.100;
    v--;
    printf("%f\n",v);
    x=x+6;
    printf("%d\n",x);
    x-=10;
    printf("%d\n",x);
    y*=2;
    printf("%d\n",y);

    return 0;

   
}