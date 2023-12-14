//write a recursive function that reverses an integer
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>;
int reverse(int);
void main(void)
{
    int a;
    printf("Enter the no: ");
    scanf("%d",&a);
    printf("The %d in words is: ",a);
    if(a==0)
        return 0;
    else
        printf("%d",reverse(a));
}
int reverse(int a)
{
    static int n=0,rem=0;
    if(a==0)
        return n;
    rem=a%10;
    n=n*10+rem;
    return(reverse(a/10));
}
