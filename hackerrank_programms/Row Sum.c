#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c],i,j;
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
     for (i = 0; i < r; i++) {
        int sum = 0;
        for (j = 0; j < c; j++) {
            sum = sum+a[i][j];
        }
        printf("%d ", sum);
    }

    return 0;
}
