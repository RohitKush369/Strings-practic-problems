//write a program to convert uppercase alphabets to lowercase alphabets.
/*
#include<stdio.h>
#include<string.h>
#define size 50
int main()
{
    char str[size];
    printf("Enter a string:");
    gets(str);
    strlwr(str);
    printf("%s",str);
}
*/
#include<stdio.h>
#include<string.h>
#define size 50
int main()
{
    char str[size];
    int i;
    printf("Enter a string:");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
    printf("%s",str);
}
