// 6. Write a program which takes a character as an input and displays its ASCII code.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    char i;
    system("cls");

    printf("Enter the character : ");
    scanf("%c",&i );
    printf("ASCII code of the character %c is %d",i,i);

    getch();
    return 0;
}