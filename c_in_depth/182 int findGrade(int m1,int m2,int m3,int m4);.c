//Rewrite the function without using a else
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int findGrade(int m1,int m2,int m3,int m4);
int main(void)
{
    int a,b,c,d;
    printf("Enter a number : ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    printf("%d ",func(a,b,c,d));
    return 0;
}
int findGrade(int m1,int m2,int m3,int m4);
{
    float total,per;
    total=m1+m2+m3+m4;
    per=total/4;
    if(per>=85)
        return 'A';
    if(per>=70)
        return 'B';
    if(per>=55)
        return 'C';
    if(per>=40)
        return 'D';
    return 'E';
}

/*int findGrade(int m1,int m2,int m3,int m4);
{
    float total,per;
    total=m1+m2+m3+m4;
    per=total/4;
    if(per>=85)
        return 'A';
    else if(per>=70)
        return 'B';
    else if(per>=55)
        return 'C';
    else if(per>=40)
        return 'D';
    else
        return 'E';
}*/

