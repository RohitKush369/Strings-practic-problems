//write a program to convert lowercase alphabets to uppercase alphabets.
/*
#include<stdio.h>
#include<string.h>
#define size 50
int main()
{
    char str[size];
    printf("Enter a string:");
    gets(str);
    strupr(str);
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
        if(str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
    printf("%s",str);
}
