//Program to compare  two strings using strcmp() function
#include<stdio.h>
#include<string.h>
#define size 50
int main()
{
    char str1[size],str2[size];
    int result=0;
    printf("Enter the first string:");
    gets(str1);
    printf("Enter the second string:");
    gets(str2);
    result=strcmp(str1,str2);
    if(result==0){
        printf("Both strings are equal");
    }
    else if(result==-1){
            printf("First string is smaller than second string");

    }
    else{
        printf("First string is bigger than second string");
    }
}
