//program to find the sum of two no
//here we use with arugment and with return type(int)
#include<stdio.h>
#include<conio.h>
#include<math.h>
int sum(int a,int b);        //here we also use int,int
int main()
{
    int i=1,j=2,s=0;
    s=sum(i,j);             //initalisation in other variable is must after that we print of that value
    printf("%d",s);
}
int sum(int a,int b)
{
    return (a+b);           //here we use this return type because in this program we use with arugment and with return type
}
