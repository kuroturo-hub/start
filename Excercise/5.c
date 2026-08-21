/*
Write a program that reads an integer entered by the user and displays it in octal (base 8):
Enter a number between 0 and 32767: 1953
In octal, your number is: 03641
*/
#include <stdio.h>
int main(){
    int a,b,c,d,e,f,num;
    printf("Enter a number between 0 and 32767:");
    scanf("%d",&a);
    
    b=a%8;
    a/=8;
    c=a%8;
    a/=8;
    d=a%8;
    a/=8;
    e=a%8;
    a/=8;
    f=a%8;

    num=10000*f+1000*e+100*d+10*c+b;

    printf("In Octal your number is: %05d",num);

    return 0;
    
    
}