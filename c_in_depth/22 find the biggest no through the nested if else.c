#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    scanf("%d,%d,%d",&a,&b,&c);// %d ke baad , lagane par output aa rehe h nahi to wrong aa reha h
    if(a>b)
    {
       if(a>c)
            printf("a is greater");
        else
            printf("c is greater");
    }
    else
    {
       if(b>c)
            printf("b is greater");
        else
            printf("c is greater");
    }
}
/*void main()
{
    int a,b,c;
    scanf("%d,%d,%d",&a,&b,&c);// %d ke baad , lagane par output aa rehe h nahi to wrong aa reha h
    if(a>b)
        if(a>c)
            printf("a is greater");
        else
            printf("c is greater");
    else
        if(b>c)
            printf("b is greater");
        else
            printf("c is greater");

}*/
