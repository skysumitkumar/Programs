//program to assign a structure variable to another structure variable
struct student
{
    char name[20];
    int rollno;
    float marks;
};
int main(void)
{
    struct student stru1={"Oliver",12,98};
    struct student stru2;
    stru2=stru1;
    printf("stru1:%s %d %.2f\n",stru1.name,stru1.rollno,stru1.marks);
    printf("stru1:%s %d %.2f\n",stru1.name,stru1.rollno,stru1.marks);
    return 0;
}
