// 10. Write a program to make the last digit of a number stored in a variable as zero. 
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i,j;
    system("cls");

    printf("Enter the number : ");
    scanf("%d",&i );
    j=i/10;
    j=j*10;
    printf("Final result is : %d",j);

    getch();
    return 0;
}