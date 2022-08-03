// 2. Write a program to print a given number without its last digit.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i;
    system("cls");

    printf("Enter the number : ");
    scanf("%d",&i );
    printf("The number without last digit is %d",i/10);

    getch();
    return 0;
}