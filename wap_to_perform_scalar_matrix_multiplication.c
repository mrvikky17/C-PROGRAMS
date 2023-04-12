#include <stdio.h>
int main()
{
    int r,c;
    printf("enter row");
    scanf("%d",&r);
    printf("enter col");
    scanf("%d",&c);
    int a[r][c] , b[r][c],i,j,z;
    printf("enter element of matrix\n");
    for (i=0 ; i<r; i++)
    {
        for( j=0; j<c ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter integer to multiply");
    scanf("%d",&z);
    for (i=0 ; i<r; i++)
    {
        for( j=0; j<c ; j++)
        {
            b[i][j]=z*a[i][j];
        }}
        for (i=0 ; i<r; i++)
    {
        for( j=0; j<c ; j++)
        {
            printf ("%d ",b[i][j]);
        }
        printf("\n");
    }
    
    
 return 0;   
}