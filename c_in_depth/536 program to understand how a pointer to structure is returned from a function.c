//program to understand how a pointer to structure is returned from a function
#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    int marks;
};
void display (struct student *);
struct student *func(struct student *p1,struct student *p2);
int main(void)
{
    struct student *stuptr;
    struct student stu1={"Dev",233,78},stu2={"Ved",12,89};
    stuptr=func(&stu1,&stu2);
    display(stuptr);
    return 0;
}
struct student *func(struct student *p1,struct student *p2)
{
    if(p1->marks>p2->marks)
        return p1;
    else
        return p2;
}
void display(struct student *stuptr)
{
    printf("Name -%s\t",stuptr->name);
    printf("Name -%d\t",stuptr->rollno);
    printf("Name -%d\t",stuptr->marks);
}
