// finding the size of the string.//
#include<stdio.h>
int main()
{
    char str[40];
    puts("Enter a string:");
    gets(str);
    puts("size of string is:");
    int size=0;
    int i=0;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    printf("%d",size);
    return 0;
}
