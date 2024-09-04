// Print "HELLO WORLD" using strings.//
/*
#include<stdio.h>
int main()
{
    char str[]="HELLO WORLD";
         printf("%s",str);
          return 0;

}
*/
/*
#include<stdio.h>
int main()
{
    char str[]="HELLO WORLD";
    int i=0;
     while( i<11){
        printf("%c",str[i]);
        i++;
    }
    return 0;
}
*/
#include<stdio.h>
int main(){
char str[]={'h','e','l','l','o','\0'};
int i=0;
while(str[i]!='\0'){
    printf("%c",str[i]);
    i++;
}
return 0;


}
