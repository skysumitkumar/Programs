#include<stdio.h>
#include<conio.h>
void main()
{
    int a=3,b=4,c=3,d=4,x,y;
    x= (a=5)&&(b=7);// && agar phale o aa jaaega to ye next ko check nahi karega
    y=(c=5)||(b=8); // || agar phale 1 aa jaaega tp ye next ko check nahi karega
    printf("a=%d,b=%d,c=%d,d=%d,x=%d,y=%d\n",a,b,c,x,y);
    x=(a==6)&&(b=9);
    y=(c==6)||(d=10);
    printf("a=%d,b=%d,c=%d,d=%d,x=%d,y=%d\n",a,b,c,d,x,y);
    return 0;
}
