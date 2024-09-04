// print a given string using %s //

/*
#include<stdio.h>
// #include<string.h>// // we can also use this header file.//
int main()
{
    char str[]="WELCOME BACK";
    printf("%s",str);
    return 0;
}
*/
// we can also do the same thing using puts(); function .//
/*
#include<stdio.h>
int main()
{
    char str[]="WELCOME BACK";
    puts(str);
    return 0;
}
*/
//we can also take string as input using gets();function//
#include<stdio.h>
int main()
{
    char str[5];
    gets(str);
    puts(str);
    return 0;
}
