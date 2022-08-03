// 7. Write a program to find the position of first 1 in LSB.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int num, result = 0, count = 0;
    system("cls");

    printf("Enter the number : ");
    scanf("%d", &num);

    result = num & 1;
    count++;
    if (result == 1)
        printf("Position of first 1 in LSB is %d", count);

    num = num >> 1;
    result = num & 1;
    count++;
    if (result == 1)
        printf("Position of first 1 in LSB is %d", count);

    num = num >> 1;
    result = num & 1;
    count++;
    if (result == 1)
        printf("Position of first 1 in LSB is %d", count);

    num = num >> 1;
    result = num & 1;
    count++;
    if (result == 1)
        printf("Position of first 1 in LSB is %d", count);

    num = num >> 1;

    getch();
    return 0;
}