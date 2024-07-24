//mohamed amin mohamed

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100];
    int i, n, x, pos;

    printf("Enter the number of elements in the array ");
    scanf("%d", &n);
    printf("Enter the elements \n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
 }

    printf("the elements you entered is : \n");
    for (i = 0; i < n; i++)
{
        printf("%d ", array[i]);
 }

    printf("\nEnter the new element to be inserted: ");
    scanf("%d", &x);


    printf("Enter the position where element is to be inserted: ");
    scanf("%d", &pos);

 // element to be inserted
    n=n+1;
    for(i = n-1; i >= pos; i--)
        array[i]=array[i-1];

    array[pos-1]=x; //Insert the element x on the any position

    // the new array
    for (i = 0; i < n; i++)
 {
        printf("%d ", array[i]);
        }
        return 0;
}


