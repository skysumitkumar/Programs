//write a function to add the two variable and three variable when the parameter is of 3 variable
//agar hamne 3 parameter de rakhe h to usse kam ka sum karege to garbage value dega but agar zyda ka karange to vo 3 ka laker sum kar dega 4 ko ignore kar dega
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int s;
    s=func(1,2);
    printf("%d\n",s);
    s=func(1,2,3,4);
    printf("%d\n",s);
    return 0;
}
int func(int a,int b,int c)
{
    return a+b+c;
}





