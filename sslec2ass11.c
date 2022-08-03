// 11. Write a program to input a number from the user and also input a digit. Append a 
// digit in the number and print the resulting number. (Example - number=234 and 
// digit=9 then the resulting number is 2349)

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int num,digit;
    system("cls");

    printf("Enter the number : ");
    scanf("%d",&num );
    printf("Enter the digit : ");
    scanf("%d",&digit );
    printf("Resulting number is : %d",num*10+digit);

    getch();
    return 0;
}