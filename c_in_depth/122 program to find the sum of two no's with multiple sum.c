//program to find the sum of two no's with multiple sum
#include<stdio.h>
#include<conio.h>
#include<math.h>
int sum(int,int);
int main()
{
    int i=10,j=20,k;
    printf("sum=%d\n",sum(i,j));        //here it use 10 and 20
    printf("sum=%d\n",sum(4,5));        //here it use 4 and 5
    printf("sum=%d\n",sum(i+j,j*2));    //here it use  i=10 and j=20
}
int sum(int a,int b)
{
    return (a+b);
}
