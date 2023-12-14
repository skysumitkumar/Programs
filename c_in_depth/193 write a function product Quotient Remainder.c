//write a function Product() that accept two integer and return their product.Don't use the * operator. Similarly make two more functions Quotient() and Remainder() that accept two integer and return the quotient ad remainder respectively,without the use of / and % operator.
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int product(int a,int b);
int quotient(int a,int b);
//int remainder(int a,int b);
int main()
{
    int a,b;
    printf("Enter the two no's: ");
    scanf("%d%d",&a,&b);
    printf("The product of two no is: %d",product(a,b));
    printf("The quotient of two no is: %d",quotient(a,b));
}
int product(int a,int b)        //without using * operator
{
    int sum=0;
    while(a>0)
    {
        if(a%2!=0)
        {
            sum+=b;
        }
        a=a/2;
        b=b*2;
    }
    return sum;
}
int quotient(int a,int b)
{

}



