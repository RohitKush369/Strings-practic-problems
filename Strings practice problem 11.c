//Write a program to find the length of a string.
/*
#include<stdio.h>
#include<string.h>
#define size 50
int main()
{
    char str[size];
    int length=0;
    printf("Enter a string:");
    gets(str);
    for(int i=0;str[i]!='\0';i++){
            length++;

    }
    printf("%d",length);
}
*/
#include<stdio.h>
#include<string.h>
#define size 50
int main()
{
    char str[size];
    int length=0;
    printf("Enter a string:");
    gets(str);
    length=strlen(str);
    printf("%d",length);
}
