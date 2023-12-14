//program to understand how an array of structures is sent to a function
#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    int marks;
};
void display(struct student);
void dec_marks(struct student stuarr[]);
int main(void)
{
    int i;
    struct student stuarr[3]={
                                {"Marry",12,98},
                                {"John",11,97},
                                {"Tom",13,89}
                             };
    dec_marks(stuarr);
    for(i=0;i<3;i++)
        display(stuarr[i]);
    return 0;
}
void dec_marks(struct student stuarr[])
{
    int i;
    for(i=0;i<3;i++)
    {
        stuarr[i].marks=stuarr[i].marks-10;
    }
}
void display(struct student stu)
{
    printf("Name -%s\t",stu.name);
    printf("Name -%d\t",stu.rollno);
    printf("Name -%d\t",stu.marks);
}
