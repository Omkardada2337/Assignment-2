// 1. Write a program to print unit digit of a given number
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i;
    system("cls");

    printf("Enter the number : ");
    scanf("%d",&i );
    printf("unit digit of the number %d is %d",i,i%10);

    getch();
    return 0;
}