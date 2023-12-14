//program to convert a decimal to binary ,octal or hexadecimal
#include<stdio.h>
void convert(int n,int c);
void main(void)
{
    int n,c;
    printf("Enter the no: ");
    scanf("%d",&n);
    printf("\nconvert to : ");
    scanf("%d",&c);
    convert(n,c);                        // esme ye sahi de reha h
    //printf("\n%d",convert(n,c));      //yaha agar ham ye print karake function call karvege to ye ek garbage value de reha h
}
void convert(int n,int c)
{
    int i=0,rem;
    char a[5];
    while(n>0)
    {
        rem=n%c;
        n=n/c;
        if(rem>9&&rem<16)
            a[i]=rem-10+'A';        //Here we make int value in char or A,B...
        else
            a[i]=rem+'0';           //Here we also make in value in char
        i++;
    }
    i=i-1;                  //always remember this ki agar ham yaha i-1 nahi karke aage loop me karvege to vo value vaha update nahi hogi or vo previous i ki value se hi chalega
    for(i;i>=0;i--)
        printf("%c\t",a[i]);        //remember it also in upper we make all values in char so we print it in char
    /*{
        if(a[i]>9&&a[i]<16)
        printf("%d\t",a[i]-10+'A');
        else
            printf("%d\t",a[i]);
    }*/

}
