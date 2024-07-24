// Mohamed Amin Mohamed

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2][2];
    int b[2][2];
    int sum[2][2];

    printf("enter the array1 elements: \n");
    for(int i=0;i<2;++i)
        for(int j=0;j<2;++j){
            printf("enter a%d%d:",i,j);
            scanf("%d",&a[i][j]);
    }
    printf("enter the array2 elements: \n");
    for(int i=0;i<2;++i)
        for(int j=0;j<2;++j){
            printf("enter a%d%d:",i,j);
            scanf("%d",&b[i][j]);
    }

    printf("the sum.\n");

    for(int i=0;i<2;++i)
        for(int j=0;j<2;++j){
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\n",sum[i][j]);
        }
                printf("\n");
    return 0;
}
