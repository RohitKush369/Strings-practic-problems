// we can also change the character of a string by giving the character or by its ASCII value.//
/*
#include<stdio.h>
int main()
{
    char str[]="hello";
    int i=0;
    str[0]=97;
    while(str[i]!='\0'){
        printf("%c",str[i]);// here the 0'rth character is chane to a .//
        i++;
    }
    return 0;
}
*/
//we can also change the character as given below.//
#include<stdio.h>
int main()
{
    char str[]="hello";
    int i=0;
    str[3]='H';
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    return 0;
}
