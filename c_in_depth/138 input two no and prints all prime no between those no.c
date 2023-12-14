//write a program that inputs two number and prints all prime numbers between those numbers
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
int primenos(int a);
int prime(int a,int b);
int main()
{
    int a,b;
    printf("Enter two no's: ");
    scanf("%d%d",&a,&b);
    printf("Prime No's in between %d and %d is: ",a,b);
    prime(a,b);

}
int prime(int a,int b)
{
    int i;
    for(i=a;i<=b;i++)
    {
        if(primenos(i))
            printf("%d",i);
    }
}
int primenos(int a)
{
    int i;
    for(i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
            return 0;
        return 1;
    }


}
