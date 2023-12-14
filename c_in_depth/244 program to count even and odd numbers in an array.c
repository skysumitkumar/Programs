//244 program to count even and odd numbers in an array
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main(void)
{
    int a[11]={1,2,3,4,5,6,7,8,9,10,11},odd=0,even=0,i;
    for(i=0;i<11;i++)
    {
        if(a[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("The  odd  and even in this array is : %d\t %d",odd,even);

}
