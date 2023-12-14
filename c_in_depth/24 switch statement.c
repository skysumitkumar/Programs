#include<stdio.h>
#include<conio.h>
void main()
{
    int choice;
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("First\n");
        case 2:
            printf("Second\n");
            break;
        case 3:
            printf("Third");
        default:
            printf("Wrong choice");
    }
    return 0;
}
