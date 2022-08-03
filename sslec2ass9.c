// 9. Write a program to print size of an int, a float, a char and a double type variable
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i;
    char c;
    float f;
    double d;
    system("cls");

    printf("size of int variable is : %d \n",sizeof(i));
    printf("size of char variable is : %d \n",sizeof(c));
    printf("size of float variable is : %d \n",sizeof(f));
    printf("size of double variable is : %d \n",sizeof(d));

    getch();
    return 0;
}