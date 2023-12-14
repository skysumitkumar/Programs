//write a proper divisor of n is a positive divisor of n, which is different from n. write a recursive function that displays all the proper divisors of a number and returns their sum
//#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#include<math.h>
//using namespace std;
int sumproper(int);

int main(void)
{
    int a;
    printf("Enter the no: ");
    scanf("%d",&a);
    //sum=sumproper(a);
   printf("The sum of proper divisors is : %d",sumproper(a));
}
int sumproper(int n)
{
    static int i=1,sum=0;
    if(i==n)
        return sum;
    if(n%i==0)
        sum+=i;
        i++;
    return(sumproper(n));

}
