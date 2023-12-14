//function with arguments but no return value
//program to find the type and area of a triangle
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void type(int,int,int);
void area(int,int,int);
void main(void)
{
    int a,b,c;
    printf("Enter the sides: ");
    scanf("%d%d%d",&a,&b,&c);
   // printf("The triangle has %d type and has %d area : ",type(a,b,c),area(a,b,c));
   type(a,b,c);
   area(a,b,c);
}
void type(int a,int b,int c)
{
    if(a==b&&b==c&&c==a)
        printf("Equilateral\n");
    else if(a==b||b==c||c==a)
        printf("Isoclese\n");
    else if((a*a)+(b*b)==(c*c)||(b*b)+(c*c)==(a*a)||(c*c)+(a*a)==(b*b))
            printf("Right angled triangle\n");
            else
                printf("scalene triangle\n");
}
void area(int a,int b,int c)
{
    int area,s;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%d\n",area);
}
