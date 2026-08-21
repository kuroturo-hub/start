/*
Write a program that accepts a date from the user in the form mm/dd/yyyy and then displays it in the form yyyymmdd:
Enter a date (mm/dd/yyyy): 2/17/2011
You entered the date 20110217 
*/
#include <stdio.h>
int main(){
    int date=0, month=0, year=0 ;
    printf("Enter the date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&date ,&month ,&year);
    printf("You entered the date %02d%02d%04d",date ,month ,year);

    return 0;



}