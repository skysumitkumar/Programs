//find the sum of series up to n terms
//i) 1+11+111+111.....
//ii) x+xsquar+xcube.....
//iii) x-xsquare+xcube-xfour.......
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
/*int main(void)
{
    int n,i,a=1,sn;
    printf("Enter range: ");
    scanf("%d",&n);
    printf("%d",a);
    for(i=1;i<=n;i++)
    {
        sn=a*10+1;
        a=sn;
        printf("+%d",sn);
    }
}*/
/*int main(void)
{
    int a,n,i,j,sn=1;
    printf("Enter the range: ");
    scanf("%d",&n);
    printf("Enter the no: ");
    scanf("%d",&a);
    for(i=1;i<n;i++)
    {
        for(j=1;j<i;j++)
        {
            sn=sn*a;
            printf("%d+",sn);
        }
    }
}*/
int main(void)
{
    int a,n,i,sn=1,j;
    printf("Enter the no: ");
    scanf("%d",&a);
    printf("Enter the range: ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(i%2==0)
        {
            sn=1;
            for(j=1;j<=i;j++)
            sn=sn*a;
            printf("%d%c",sn,'+');
        }
        else
        {
            sn=1;
            for(j=1;j<=i;j++)
            sn=sn*a;
            printf("%d%c",sn,'-');
        }
    }
}
