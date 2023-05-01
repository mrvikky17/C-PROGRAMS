#include <stdio.h>
int main()
{
    int r,c;
    printf("enter row and column");
    scanf("%d%d",&r,&c);
    int a[r][c],i,j,b[r][c],f=0;
    printf("enter element of first matrix");
    for (i=0;i<r;i++){
        for (j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter element of second matrix ");
    for (i=0;i<r;i++){
        for (j=0;j<c;j++)
        {
            scanf("%d ",&b[i][j]);
        }
    }
    for (i=0;i<r;i++){
        for (j=0;j<c;j++)
        {
            //printf("%d",&a[i][j]);
            if (a[i][j]!=b[i][j])
            {
                f=1;
            }
        }
    }
    if (f==0)
    {
        printf("both are equal");
    }
    else 
    {
        printf("both are not equal");
    }
    return 0;
}