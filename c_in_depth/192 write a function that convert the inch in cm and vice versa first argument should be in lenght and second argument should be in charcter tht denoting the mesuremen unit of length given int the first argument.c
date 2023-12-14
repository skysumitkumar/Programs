//write a function that convert the inch in cm and vice versa first argument should be in length and second argument should be in character the denoting the mesurement unit of length given int the first argument
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
float convert(int a,char b);
int main(void)
{
    int length;
    float cm;
    char i;
    char j;
    scanf("%d",&length);
    printf("Convert %d inches in %f cm:",length,cm=convert(length,'i'));
    printf("Convert %f cm in %.2f inches:",cm,convert(cm,'j'));
}
float convert(int a,char b)
{
    if(b=='i')
        return a*2.54;
    else if(b=='j')
        return a*0.394;
}
