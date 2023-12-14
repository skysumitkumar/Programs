//write a recursive function to enter a line of text and display it in reverse order without storing the text in an array
//I will do it latter because currently i have not learn those concepts
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main(void)
{
    char string;
    printf("Enter the text: ");
    scanf("%s",&string);
    printf("%s",reversestr(string));
}
char reversestr(char string)
