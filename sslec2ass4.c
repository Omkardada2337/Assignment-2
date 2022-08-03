// 4. Write a program to swap values of two int variables without using a third variable.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    system("cls");

    printf("Enter the number a ");
    scanf("%d", &a);
    printf("Enter the number b ");
    scanf("%d", &b);
    printf("The values of a and b after swapping :");
    b = a + b;

    printf("a=%d and b=%d", b - a, a);

    getch();
    return 0;
}