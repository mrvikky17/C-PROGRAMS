#include <stdio.h>
int main()
{
    int r,c;
    printf("enter row");
    scanf("%d",&r);
    printf("enter col");
    scanf("%d",&c);
    int a[r][c] , b[r][c],i,j,sum[r][c];
    printf("enter element of first matrix\n");
    for (i=0 ; i<r; i++)
    {
        for( j=0; j<c ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter element of second matrix\n");
    for (i=0 ; i<r; i++)
    {
        for( j=0; j<c ; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for (i=0 ; i<r; i++)
    {
        for( j=0; j<c ; j++)
        {
    sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("sum of matrices\n");
     for (i=0 ; i<r; i++)
    {
        for( j=0; j<c ; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    
 return 0;   
}