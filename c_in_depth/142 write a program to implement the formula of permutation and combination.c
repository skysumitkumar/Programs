//write a program to implement the formula of permutation and combination
//no of permutation of n objects taken r at  time: p(n,r)=n!/(n-r)!
//no of combination of n objects taken r at a time is : c(n,r)=n!/(r!*(n-r)!=p(n,r)/r!
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
long int permutation(int a,int b);
long int combination(int a,int b);
long int factorialn(int a);
//long int factorialr(int a,int b);
//long int factorialnr(int a,int b);

int main()
{
    int n,r;
    printf("Enter the no of things that you have and no of things that you have to chose from them :");
    scanf("%d%d",&n,&r);
    printf("The no of permutation is: %d\n",permutation(n,r));
    printf("The no of combination is: %d\n",combination(n,r));
    return 0;
}
long int permutation(int a,int b)
{
    long int permu;
    permu=factorialn(a)/factorialn(a-b);
    return permu;
}
long int combination(int a,int b)
{
    long int comb;
    comb=factorialn(a)/(factorialn(a-b)*factorialn(b));
    return comb;
}
long int factorialn(int a)
{
    int result=1,i;
    for(i=1;a>=1;i++)
    {
        result=result*a;
        a--;
    }
    return result;
}





