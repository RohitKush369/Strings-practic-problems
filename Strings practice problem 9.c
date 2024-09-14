//write a program to copy one string into another string.
#include<stdio.h>
#include<string.h>
#define size 50
int main()
{
    char str1[size],str2[size];
    puts("Enter a string:");//we can also use printf( )
    gets(str1);
    strcpy(str2,str1);//copying the one string into the another string
    printf("first string is:%s\n",str1);
    printf("second string is:%s\n",str2);
}
