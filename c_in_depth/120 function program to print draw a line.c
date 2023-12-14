//program to print draw a line
//Here this program is no arugment(values inside pranthesies) and no return(return type in place of void) type
#include<stdio.h>
#include<conio.h>
#include<math.h>
void drawline(void);
void main()
{
    drawline();
    return 0;       // here we use return 0 because here no return type void is there
}
void drawline()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("_");
    }
}
