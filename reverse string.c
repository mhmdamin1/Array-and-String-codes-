// moahmed amiin moahemd

#include <stdio.h>
#include <string.h>

#include <stdlib.h>

int main()
{
    int s[100],temp;
    int i,j=0;

    printf("enter your array: ");
    gets(s);

    j = strlen(s) - 1 ;

    for(i=0;i<j;++i){
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        j--;
    }
    printf("the reverse string is: %s",s);

    return 0;
}
