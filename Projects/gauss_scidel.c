#include <stdio.h>
#include <math.h>

int main(){
    float e1,e2,e3,e4,e5,e6,e7,e8,e9,e10,e11,e12,e13,e14,e15,e16,e17,e18,e19,e20;
    float x=0,y=0,z=0,w=0;
    float x1,y1,z1,w1;
    float error=0.000000000000000001;
    int i=1;

    printf("Enter :");
    scanf("%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f",&e1,&e2,&e3,&e4,&e5,&e6,&e7,&e8,&e9,&e10,&e11,&e12,&e13,&e14,&e15,&e16,&e17,&e18,&e19,&e20);
    /*printf("First equation :");
    scanf("%f,%f,%f,%f,%f",&e1,&e2,&e3,&e4,&e5);
    printf("Second equation :");
    scanf("%f,%f,%f,%f,%f",&e6,&e7,&e8,&e9,&e10);
    printf("Third equation :");
    scanf("%f,%f,%f,%f,%f",&e11,&e12,&e13,&e14,&e15);
    printf("Fourth equation :");
    scanf("%f,%f,%f,%f,%f",&e16,&e17,&e18,&e19,&e20);*/
    
    do {

        x1=x;
        y1=y;
        z1=z;
        w1=w;

        x=(e5-e2*y-e3*z-e4*w)/e1;
        y=(e10-e6*x-e8*z-e9*w)/e7;
        z=(e15-e11*x-e12*y-e14*w)/e13;
        w=(e20-e16*x-e17*y-e18*z)/e19;
        
        printf("%d: %f,%f,%f,%f\n",i,x,y,z,w);
        i++;
        
    } while(fabs(x1-x) > error || fabs(y1-y) > error || fabs(z1-z) > error || fabs(w1-w) > error);

    printf("\nx = %.4f\ny = %.4f\nz = %.4f\nw = %.4f\n",x,y,z,w);
}