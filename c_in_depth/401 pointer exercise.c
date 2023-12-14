#include<stdio.h>
void func1(int *ptr);
void func(int **pptr);
int main(void)
{
    int arr[5]={1,2,3,4,5};
    int *p =arr;
    func1(p);
    printf("p=%p,\t",p);
    func1(p);
    printf("p=%p,\t",&arr[1]);
    func2(&p);
    printf("p=%p\n",p);
    return 0;
}
void func1(int *ptr)
{
    ptr++;
}
void func2(int **pptr)
{
    (*pptr)++;
}

