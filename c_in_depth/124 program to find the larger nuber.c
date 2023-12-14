//program to find the larger number
#include<stdio.h>
#include<conio.h>
#include<math.h>
int max(int x,int y);
int main()
{
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b);
    printf("The max no is: %d",max(a,b));
    return 0;
}
int max(int x,int y)
{
    return x>y?x:y;
}
