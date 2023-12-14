//write a program to read roll number and marks of 10 students in 3 subjects. The valid range for roll numbers is 1000-9999.If the roll number entered is not in this range,the user should be asked to enter again.Calculate total marks of only those students who get more than or equal to 40 marks in each subject.Count the number of students whose total is more than 200. print the roll number of the students who gets the highest total.
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
    int i,rollno,e,h,m,total,r,sn=0,highest,total1,total2,total3,total4,total5,total6,total7,total8,total9,total10;
    for(i=1;i<=10;i++)
    {
        printf("\nEnter roll no: ");
        scanf("%d",&rollno);
        if(rollno>=1000&&rollno<=9999)
        {
            printf("Enter marks of English: ");
            scanf("%d",&e);
            printf("Enter marks of Hindi: ");
            scanf("%d",&h);
            printf("Enter marks of Math: ");
            scanf("%d",&m);
            if(i==1)
                total1=e+h+m;
            else if(i==2)
                total2=e+h+m;
            else if(i==3)
                total3=e+h+m;
            else if(i==4)
                total4=e+h+m;
            else if(i==5)
                total5=e+h+m;
            else if(i==6)
                total6=e+h+m;
            else if(i==7)
                total7=e+h+m;
            else if(i==8)
                total8=e+h+m;
            else if(i==9)
                total9=e+h+m;
            else if(i==10)
                total10=e+h+m;
            if(e>=40&&h>=40&&m>=40)
            {
                //printf("roll no of marks greater than 40: %d",rollno);
                total=e+h+m;
                printf("Total marks: %d",total);
            }
            else
                printf("Marks in each subject is not greater than 40:");
            if(total>200)
                sn=sn+1;
        }
        else
            i--;
    }
    if(total1>total2&&total1>total3&&total1>total4&&total1>total5&&total1>total6&&total1>total7&&total1>total8&&total1>total9&&total1>total10)
        r=rollno;
    else if(total2>total3&&total2>total4&&total2>total5&&total2>total6&&total2>total7&&total2>total8&&total2>total9&&total2>total10)
        r=rollno;
    else if(total3>total4&&total3>total5&&total3>total6&&total3>total7&&total3>total8&&total3>total9&&total3>total10)
        r=rollno;
    else if(total4>total5&&total4>total6&&total4>total7&&total4>total8&&total4>total9&&total4>total10)
        r=rollno;
    else if(total5>total6&&total5>total7&&total5>total8&&total5>total9&&total5>total10)
        r=rollno;
    else if(total6>total7&&total6>total8&&total6>total9&&total6>total10)
        r=rollno;
    else if(total7>total8&&total7>total9&&total7>total10)
        r=rollno;
    else if(total8>total9&&total9>total10)
        r=rollno;
    else if(total9>total10)
        r=rollno;
    else
        r=rollno;
    printf("\nTotal no of students whose marks is more than 200: %d\n",sn);
    printf("roll of getting the highest marks is: %d",r);
}
