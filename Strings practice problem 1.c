// Print the address of each character of a string.//
#include<stdio.h>
int main()
{
    char str[4]={'a','b','c','d'};
    printf("%p\n",&str[0]);
      printf("%p\n",&str[1]);
     printf("%p\n",&str[2]);
    printf("%p\n",&str[3]);
        return 0;
}
