//program to understand the use of return statement
#include<stdio.h>
#include<conio.h>
#include<math.h>
void selection(int age,float ht);
int main(void)
{
    int age;
    float ht;
    printf("Enter age and height: ");
    scanf("%d%f",&age,&ht);
    selection(age,ht);
}
void selection(int age,float ht)
{
    if(age>25)
    {
        printf("Age should be less than 25\n");
        return;                                     //the use of return in here is to terminate all statements after it
    }
    if(ht<5)
    {
        printf("Height should be more than 5\n");
        return;                                     //the use of return in here is to terminate all statements after it
    }
    printf("Selected\n");
}
