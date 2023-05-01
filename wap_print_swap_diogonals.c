#include <stdio.h>
int main()
{
    int r,c;
    printf("enter row and column");
    scanf("%d%d",&r,&c);
    int a[r][c],i,j,temp;
    printf("enter element of matrix");
    for (i=0;i<r;i++){
        for (j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    
      for (i=0;i<r;i++){
        for (j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<r;i++){
     temp = a[i][i];
     a[i][i]=a[i][c-1-i];
     a[i][c-1-i]=temp;
        
    }
    for (i=0;i<r;i++){
        for (j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
     return 0;
}