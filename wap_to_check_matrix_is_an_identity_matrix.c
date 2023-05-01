
#include <stdio.h>

int main()
{
    int r,c;
    printf("enter row and column");
    scanf("%d%d",&r,&c);
    int a[r][c], i, j,flag=0;
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
        if(a[i][j] != 1 && a[j][i] !=0)
        {
            flag = 1;
            break;
        }
        
}
}
if (flag==0)
{
    printf("this is an identity matrix");
}
else 
{
    printf("this is not an identity matrix");
}
    return 0;
}
