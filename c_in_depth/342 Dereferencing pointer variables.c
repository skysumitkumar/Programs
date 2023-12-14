//Dereferencing pointer variables
#include<stdio.h>
int main(void)
{
    int a=87;
    float b=4.5;
    int *p1=&a;
    float *p2=&b;
    printf("value of p1=Addres of a =%p\n",p1);
    printf("value of p2=Address of b=%p\n",p2);
    printf("Address of p1=%p\n",&p1);
    printf("Address of p2=%p\n",&p2);
    printf("value of a=%d %d %d\n",a,*p1,*(&a));
    printf("value of b=%.lf %.lf %.lf\n",b,*p2,*(&b));  //long float it give decimal value at next integer
    return 0;
}
