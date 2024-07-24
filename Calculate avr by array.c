// Mohamed amin mohamed


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int a[n];
    int avr,sum=0;

    printf("enter the num of array elemant: ");
    scanf("%d",&n);

    for(i=0; i<n; ++i){

        printf("enter number: ",i+1);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    avr=sum/n;

    printf("the avr is = %d",avr);

    return 0;
}
