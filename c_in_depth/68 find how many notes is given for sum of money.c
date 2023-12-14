#include<stdio.h>
#include<conio.h>
void main()
{
    int n,choice;
    printf("Enter a amount: ");
    scanf("%d",&n);
    printf("Enter choice of which note you want: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 100:
        printf("100 rs notes is : %d\n",n/100);
        n=n%100;
    case 50:
        printf("50 rs notes is : %d\n",n/50);
        n=n%50;
    case 20:
        printf("20 rs notes is : %d\n",n/20);
        n=n%20;
    case 10:
        printf("10 rs notes is : %d\n",n/10);
        n=n%10;
    case 5:
        printf("5 rs notes is : %d\n",n/5);
        n=n%5;
    case 2:
        printf("2 rs notes is : %d\n",n/2);
        n=n%2;
    case 1:
        printf("1 rs notes is : %d\n",n/1);
        n=n%1;
        break;
    default:
        printf("Enter only valid value");
        break;
    }
    printf("\n");

}
