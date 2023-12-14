//program to find the prime factor of a number
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int primefact(int n);
void main(void)
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    printf("%d",primefact(n));
}
int primefact(int n)
{
   static int d=2;
    if(n==1)
        return;
    if(n%d==0)
    {
      printf("%ld",d);
        n=n/d;
    }
        d++;
       primefact(n);

}
