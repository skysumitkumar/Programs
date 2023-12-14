/*
a-z= lowercase
A-Z= Uppercase
0-9= digits
special chracter
*/
void main()
{
    char a;
    printf("Enter the input:");
    scanf("%c",&a);
    if(a>=0&&a<=47/*||a>=48&&a<=64*/)
       printf("these are special chracter");
    if(a>=48&&a<=57)
        printf("these are digits");
    else if(a>=65&&a<=90)
        printf("it is uppercase");
    else if(a>=97&& a<=122)
        printf("it is lowercase");



}

