//write a program to convert a decimal number into a roman no
//important
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int roman(int,int,char);
int main(void)
{
  int num;
  printf("Enter a no that you have to convert: ");
  scanf("%d",&num);
  if(num>=1000)
    num=roman(num,1000,'m');
    if(num>=500)
        num=roman(num,500,'d');
    if(num>=100)
        num=roman(num,100,'c');
    if(num>=50)
        num=roman(num,50,'l');
    if(num>=10)
        num=roman(num,10,'x');
    if(num>=5)
        num=roman(num,5,'v');
    if(num>=1)
        roman(num,1,'i');
    printf("\n");
    return 0;
}
int roman(int n,int k,char c)
{
    if(n==9)
    {
        printf("ix");
        return 0;
    }
    if(n==4)
    {
        printf("iv");
        return 0;
    }
    while(n>=k)
    {
        printf("%c",c);
        n=n-k;
    }
    return n;
}

