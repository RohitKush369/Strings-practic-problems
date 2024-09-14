//Write a program to separate the individual characters from a string.
#include<stdio.h>
int main()
{
    char str[]="HELLO WORLD";
    int i=0;
    while(str[i]!='\0'){
       printf("%c ",str[i]);
        i++;
    }
}
