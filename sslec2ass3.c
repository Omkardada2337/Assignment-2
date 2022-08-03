// 3. Write a program to swap values of two int variables
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int a, b ,c;
    system("cls");

    printf("Enter the number a ");
    scanf("%d", &a);
    printf("Enter the number b ");
    scanf("%d", &b);
   c=a;
   a=b;
   b=c;

    printf("after swapping values of a=%d and b=%d",a,b);

    getch();
    return 0;
}