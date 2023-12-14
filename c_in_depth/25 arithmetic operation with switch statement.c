#include<stdio.h>
#include<conio.h>
void main()
{
    char op;
    int a,b;
    printf("Enter your choice: ");
    scanf("%d%c%d",&a,&op,&b);
    switch(op)
    {
    case '+':
        printf("a+b=%d",a+b);
    case '*':
        printf("a*b=%d/n",a*b);
    case '/':
        printf("a/b=%d/n",a/b);
    case '%':
        printf("a%b=%d",a%b);
    }
}
