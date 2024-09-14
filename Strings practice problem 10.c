// write a program to concatenate two strings using strcat() function.
#include<stdio.h>
#include<string.h>
#define size 50
int main()
{
    char str1[size],str2[size];
printf("Enter the first string:");
gets(str1);
printf("Enter the second string:");
gets(str2);
strcat(str1,str2);//concatenate function
printf("Concatenated string:%s\n ",str1);
}
