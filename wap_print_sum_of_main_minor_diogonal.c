#include <stdio.h>
int main()
{
    int r,c;
    printf("enter row and column");
    scanf("%d%d",&r,&c);
    int a[r][c],i,j,main,minor;
    printf("enter element of first matrix");
    for (i=0;i<r;i++){
        for (j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
     for (i=0;i<r;i++){
        for (j=0;j<c;j++)
        {   // condition for main diogonal
            if (i == j)
                main += a[i][j];
 
            // Condition for minor diagonal
            if ((i + j) == (c - 1))
                minor += a[i][j];
        }
     }
      for (i=0;i<r;i++){
        for (j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
     printf("sum of main diagonal elements =%d \n",main);
      printf("sum of minor diagonal elements =%d",minor);
     return 0;
}