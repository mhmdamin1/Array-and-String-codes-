// mohamed amin mohamed

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,x ;
    int a[50];

    printf("Enter the number of elements in the array ");
    scanf("%d", &n);
    printf("Enter the elements \n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
 }

    printf("the elements you entered is : \n");
    for (i = 0; i < n; i++)
{
        printf("%d ", a[i]);
}

    printf("\nEnter the element you need to search: ");
    scanf("%d", &x);

        if(i < n){
            printf("the number found at location = %d",i);
        }else{
            printf("number not found try again.");
        }





    return 0;
}
