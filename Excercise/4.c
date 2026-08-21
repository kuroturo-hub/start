/*
Write a program that asks the user to enter a two-digit number, then prints the number wit
its digits reversed. A session with the program should have the following appearance:
Enter a two-digit number: 28
The reversal is: 82
*/

#include <stdio.h>
int main(){
    int a=0 , b=0;
    printf("Emter a two digit no.: ");
    scanf("%1d %1d",&a,&b);

    printf("The reversal is: %d%d",b,a);

    return 0;



}