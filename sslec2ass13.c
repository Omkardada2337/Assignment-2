// 13. Write a program to take a three-digit number from the user and rotate its digits by 
// one position towards the right.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i,j;
    system("cls");

    printf("Enter the three digit number : ");
    scanf("%d",&i );
    j=i%10;
    i=i/10;
    printf("Final result is %d",j*100+i);


    getch();
    return 0;
}