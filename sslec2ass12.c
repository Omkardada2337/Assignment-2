// 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
// convert it into USD
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    double INR,USD;
    system("cls");

    printf("Enter the amout in INR : ");
    scanf("%lf",&INR );
    printf("Amount in USD is %.5lf",(INR/76.23));

    getch();
    return 0;
}