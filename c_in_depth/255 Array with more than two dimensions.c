//Array with more than two dimensions
//This is incomplete program we will complete it later
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define R 2
#define R1 4
#define C1 3
void main(void)
{
    int i,j,a[R][R1][C1]={
                            {
                            {1,2,3},
                            {4,5},
                            {6,7,8},
                            {9}
                            },
                            {
                            {10,11},
                            {12,13,14},
                            {15,16},
                            {17,18,19}
                            }

                        };

    for(i=0;i<R1;i++)
        for(j=0;j<C1;j++)
        scanf("%d",&a[][i][j]);
}
