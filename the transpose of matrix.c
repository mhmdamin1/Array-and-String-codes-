// Mohamed amiin mohamed
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int a[20][20],transpose[20][20];
    int r,c;

    printf("enter the num of rows & colums: ",r,c);
    scanf("%d%d",&r,&c);

    printf("enter the element of the matrix: \n");
    for(i=0;i<r;++i)
        for(j=0;j<c;++j){
            printf("enter a%d%d:",i,j);
            scanf("%d",&a[i][j]);
    }
    printf("the matrix u entered is: \n");
    for(i=0;i<r;++i){
        for(j=0;j<c;++j){
            printf("%d\t",a[i][j]);
        }
        printf("\t\n");
    }
// the transpose
     for(i=0;i<r;++i){
        for(j=0;j<c;++j){
                 transpose[j][i]=a[i][j];
        }
     }
     printf("the transpose of the matrix is: \n");
     for(i=0;i<c;++i){
        for(j=0;j<r;++j){
            printf("%d\t",transpose[i][j]);
        }
        printf("\t\n");
        }

    return 0;
}
