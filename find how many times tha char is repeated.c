// moahmed amin mohamed


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch,s[1000];
    int i,count=0;

    printf("enter your string: \n");
    gets(s);

    printf("enter a char to find how many times it appears : \n");
    scanf("%c",&ch);

    for(i=0;s[i]!='\0';++i){
        if(ch==s[i])
        ++count;

    }
    printf("the char %c appears = %d times ",ch,count);

    return 0;
}
