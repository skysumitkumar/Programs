//195 write a function that accept a character  if the character is a lower case alphabet its upper case equivalent is returned otherwise the unchanged character is returned
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
char uppercase(char n);
char main(void)
{
    char a;
    printf("Enter a character to convert: ");
    scanf("%c",&a);
    printf("%c",uppercase(a));
}
char uppercase(char n)
{
    int a;
    a=n;
    if(a>=97&&a<=122)
        return a-32;
    else
        return n;
}
