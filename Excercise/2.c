/*
Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay
that amount using the smallest number of $20, $10, $5, and $1 bills:
Enter a dollar amount: 93

$20 bills: 4
$10 bills: 1
$5 bills: 0
$1 bills: 3
*/
#include <stdio.h>
int main(){
    int amt=0;
    int bill_20=0 ,bill_10=0 ,bill_5=0 ,bill_1=0;

    printf("Enter a dollar amount(excluding cents): ");
    scanf("%d",&amt);

    bill_20 = amt/20;
    amt = amt -  (bill_20 * 20);
    bill_1 = amt/10;
    amt = amt -  (bill_10 * 10);
    bill_5 = amt/5;
    amt = amt -  (bill_5 * 5);
    bill_1 = amt/1;

    printf("$20 bills: %d\n",bill_20);
    printf("$10 bills: %d\n",bill_10);
    printf("$5 bills: %d\n",bill_5);
    printf("$1 bills: %d\n",bill_1);

    return 0;

}