// moahmed amiin moahmed

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[1000];
    int i;

    printf("enter your string: \n");
    gets(s);

    for(i=0;s[i]!='\0';++i);
    printf("the lenth of string is : %d",i);

    return 0;
}
