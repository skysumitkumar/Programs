//program to find the sum of two no
// definition of function is placed before the calling function then declaration is not needed
#include<stdio.h>
#include<conio.h>
#include<math.h>
int sum(int x,int y)
{
    int s;
    s=x+y;
    return s;
}
int main()
{
    int a,b,s;
    printf("Enter the two no: ");
    scanf("%d%d",&a,&b);
    s=sum(a,b);
    printf("The sum of the no is: %d",s);
    return 0;
}
