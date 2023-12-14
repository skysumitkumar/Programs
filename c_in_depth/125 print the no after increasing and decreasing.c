//print the no after increasing and decreasing
#include<stdio.h>
#include<conio.h>
#include<math.h>
void func(int a,int b);
int main(void)
{
    int x=10,y=20;
    func(x,y);
    printf("x=%d,y=%d\n",x,y);
    return 0;
}
void func(int a,int b)
{
    a++;
    b--;
    printf("a=%d,b=%d\n",a,b);
}
