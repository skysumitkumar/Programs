//write a recursive function that displays a positive integer in words,for example if the integer is 2134 then it is displayed as two one three four
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int inwords(int);
int reverse(int);
void main(void)
{
    int a;
    printf("Enter the no: ");
    scanf("%d",&a);
    printf("The %d in words is: ",a);
    if(a==0)
        printf("zero");
    else
        inwords(a);
}
int inwords(int a)
{
    int n=0,rem=0;
    while(a>0)
    {
      rem=a%10;
      a=a/10;
      n=n*10+rem;
    }
    reverse(n);
}
int reverse(int a)
{
    int rem;
    if(a==0)
        return rem;
    rem=a%10;
    //return(inwords(a/10));
    if(rem==0)
        printf("zero");
    else if(rem==1)
        printf("one");
    else if(rem==2)
        printf("two");
    else if(rem==3)
        printf("three");
    else if(rem==4)
        printf("four");
    else if(rem==5)
        printf("five");
    else if(rem==6)
        printf("six");
    else if(rem==7)
        printf("seven");
    else if(rem==8)
        printf("eight");
    else
        printf("nine");
    return(reverse(a/10));
}
