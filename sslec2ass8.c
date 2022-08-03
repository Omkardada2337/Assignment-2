// 8. Write a program to check whether the given number is even or odd using a bitwise
// operator.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i;
    system("cls");

    printf("Enter the number : ");
    scanf("%d", &i);
    i = i & 1;
    if (i == 1)
    {
        printf("ODD");
    }
    else
    {
        printf("EVEN");
    }

    getch();
    return 0;
}