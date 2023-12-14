//program to understand how a pointer to structure variable is sent to a function
#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    int marks;
};
void display(struct student *);
void inc_marks(struct student *);
int main(void)
{
    struct student stu1={"John",12,87};
    struct student stu2={"Marry",18,90};
    intc_marks(&stu1);
    intc_marks(&stu2);
    display(&stu1);
    display(&stu2);
    return 0;
}
void inc_marks(struct student *stuptr)
{
    (stuptr->marks)++;
}
void display(struct student *stuptr)
{
    printf("Name -%s\t",stuptr->name);
    printf("Rollno -%d\t",stuptr->rollno);
    printf("Marls -%d\n",stuptr->marks);
}
