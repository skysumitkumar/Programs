#include<stdio.h>
#include<conio.h>
/*void main()
{
    char a;
    printf("Enter Alphabet: ");
    scanf("%c",&a);
    switch(a)
    {
    case 'a':
        printf("it is vowel:");
    case 'e':
        printf("it is vowel:");
    case 'i':
        printf("it is vowel:");
    case 'o':
        printf("it is vowel:");
    case 'u':
        printf("it is vowel:");
    default:
        printf("it is constant:");


    }
}*/
/*void main()
{
    char a;
    printf("Enter Alphabet: ");
    scanf("%c",&a);
    switch(a)
    {
    case 'a':
        printf("it is vowel:");
    case 'e':
        printf("it is vowel:");
        break;
    case 'i':
        printf("it is vowel:");
    case 'o':
        printf("it is vowel:");
    case 'u':
        printf("it is vowel:");
    default:
        printf("it is constant:");


    }
}*/

void main()
{
    char a;
    printf("Enter Alphabet: ");
    scanf("%c",&a);
    switch(a)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("it is vowel");
    default:
        printf("it is constant:");
    }
}



