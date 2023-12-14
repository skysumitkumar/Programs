//check the no is palindrome or not
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int reverse(int n);
int palindrome(int n);
int main()
{
    int a;
    printf("Enter the no: ");
    scanf("%d",&a);
    if(palindrome(a))
        printf("Entered no is palindrome no.");
    else
        printf("Entered no is not a palindrome no.");
}
int palindrome(int n)
{
    if(n==reverse(n))
        return 1;
    else
        return 0;
}
int reverse(int n)
{
    int rev=0;
    while(n>0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    return (rev);
}
