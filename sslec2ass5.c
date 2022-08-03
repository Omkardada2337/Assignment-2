// 5. Write a program to input a three-digit number and display the sum of the digits
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, sum = 0, rem = 0;
    system("cls");

    printf("Enter the three-digit number : ");
    scanf("%d", &i);
    rem = i % 10;
    sum = sum + rem;
    i = i / 10;

    rem = i % 10;
    sum = sum + rem;
    i = i / 10;

    rem = i % 10;
    sum = sum + rem;
    i = i / 10;
    printf("Sum of the digits of the three digit number is %d",sum);

    getch();
    return 0;
}