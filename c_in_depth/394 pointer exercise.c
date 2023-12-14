#include<stdio.h>
int arr[8]={11,22,33,44,55,66,77,88};
int *p,*q;
q=arr/2;        //multiplication and division is not valid in pointer
p=q*2;
printf("%d %d",*p,*q);
return 0;
