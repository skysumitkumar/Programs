//program that uses a function with no argument and  no return values
#include<stdio.h>
#include<conio.h>
#include<math.h>
void displaymenu(void);
int main(void)
{
    int choice;
    displaymenu();
    printf("Enter your choice :");
    scanf("%d",&choice);
    return 0;
}
void displaymenu(void)
{
    printf("1: create database\n");
    printf("2: insert new record\n");
    printf("3: modify a record\n");
    printf("4: delete a record\n");
    printf("5: display all record\n");
    printf("6: exit\n");
}
