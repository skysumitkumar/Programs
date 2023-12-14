//raise a floating power to a integer value and both values are in integer
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
float raisepower(float a,int b);
float main()
{
    float i;
    int j;
    printf("Enter the no and its power: ");
    scanf("%f%d",&i,&j);
    printf("Ans is %f",raisepower(i,j));
}
float raisepower(float a,int b)
{
    int i;
    float pow=1;
    for(i=1;i<=b;i++)
    {
        pow=pow*a;
    }
    return pow;
}
