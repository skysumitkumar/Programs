//Binary search in an array
#include<stdio.h>
int main(void)
{
    int i,a[20],l=0,h=19,mid,n;
    for(i=0;i<20;i++)
        scanf("%d",&a[i]);
    for(i=0;i<20;i++)
        printf("%d\t",a[i]);
        printf("\n Enter the no that you want to find:");
        scanf("%d",&n);
    mid=(l+h)/2;
    while(l<=h)
    {
        if(a[mid]==n)
        {
            printf("This no's index is %d",mid);
            break;
        }

        else if(a[mid]>n)
        {
           h=mid-1;
           mid=(l+h)/2;
        }
        else if(a[mid]<n)
        {
            l=mid+1;
            mid=(l+h)/2;
        }
    }
}
