/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int r,c;
    printf("enter row and column");
    scanf("%d%d",&r,&c);
    int a[r][c], i, j,b[r][c];
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
            b[j][i]=a[i][j];
        }
        
    }
    printf("matrix after transposing");
     for (i= 0; i<r;i++)
    {
        for (j=0;j<c;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
}
    return 0;
}
