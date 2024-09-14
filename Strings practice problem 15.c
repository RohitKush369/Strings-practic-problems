//write a program to count number of words in string.
#include<stdio.h>
#include<string.h>
#define size 50
int main()
{
    char str[size];
    int i=0;
    int words=1;
    printf("Enter a string:");
    gets(str);
    while(str[i]!='\0'){
    if(str[i]==' '|| str[i]=='\n'){
            words++;
        }
        i++;
    }
    printf("Total words is:%d",words);
}
