//program to solve the tower of hanoi problem using recursion
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void towerofhanoi(int disk,char source,char temp,char distination);
void main(void)
{
    int disk;
    char source='A',temp='B',distination='C';
    printf("Enter the no of disk: ");
    scanf("%d",&disk);
    towerofhanoi(disk,source,temp,distination);
}
void towerofhanoi(int disk,char source,char temp,char distination)
{
    if(disk==1)
        return printf("Move the disk %d from %c to %c \n",disk,source,distination);
    towerofhanoi(disk-1,source,distination,temp);
    printf("Move the disk %d from %c to %c \n",disk,source,distination);
    towerofhanoi(disk-1,temp,source,distination);
}
