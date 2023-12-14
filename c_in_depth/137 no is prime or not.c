//write a function isprime() which takes a number and returns 1 if the number is prime and 0 otherwise
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int isprime(int n);
int main(void)
{
    int a,prime;
    printf("Enter the no: ");
    scanf("%d",&a);
    if(isprime(a))
        printf("Entered no is not a prime no ");
    else
        printf("Entered no is prime no ");
}
int isprime(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 1;
        return 0;

}
