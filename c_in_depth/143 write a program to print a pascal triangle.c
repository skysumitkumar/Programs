//write a program to print a pascal triangle
#include<stdio.h>
#include<conio.h>
#include<math.h>
long int factorial(int);
long int combination(int,int);
int main(void)
{
    int i,j,k;
    printf("Enter the no of rows for pascal's triangle: ");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        for(j=0;j<=i;j++)
            printf("%ld",combination(i,j));
            printf("\n");
    }
    return 0;
}
long int combination(int a,int b)
{
    long int result;
    result=factorial(a)/(factorial(b)*factorial(a-b));
    return result;
}
long int factorial(int a)
{
    int i,result=1;
    if(a==0)
        return 1;
    for(i=1;i<=a;i++)
    result=result*i;
    return result;

}
