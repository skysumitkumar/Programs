#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,sum=0;
    float avg;
    for(i=1;i<=10;i++)
    {
        printf("Enter a no");
        scanf("%d",&n);
        sum=sum+n;
        avg=sum/i;// here ans is 4.000000 and when we use avg=sum/10.0 then ans is 4.500000
    }
    printf("%d\n",sum);
    printf("%d",avg);

}
