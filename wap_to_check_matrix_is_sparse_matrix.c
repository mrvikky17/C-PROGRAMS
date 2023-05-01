
#include <stdio.h>

int main()
{
    int r,c;
    printf("enter row and column");
    scanf("%d%d",&r,&c);
    int a[r][c], i, j,count=0;
    printf("enter elements");
    for (i= 0; i<r;i++)
    {
        for (j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
    for (i= 0; i<r;i++)
    {
        for (j=0;j<c;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
    
     for (i= 0; i<r;i++)
    {
        for (j=0;j<c;j++){
        if(a[i][j] == 0)
            count++;
      }
   }
   if(count > ((r * c)/2))
      printf("Matrix is a sparse matrix");
   else
      printf("Matrix is not sparse matrix");
    return 0;
}
