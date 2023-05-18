#include <stdio.h>
int main()
{
    int n,k,i,j;
    scanf("%d%d",&n,&k);
   if(n!=k){
        printf("Not square matrix.");
       } else {
        int a[k][n];
        for (i=0;i<n;i++){
          for (j=0;j<k;j++){
            scanf("%d",&a[i][j]);
          }
        }
   for (i=0;i<n;i++){
        for (j=0;j<k;j++){
          if(i==j){
               printf("%d",a[i][j]);
        }printf("  ");
       }printf("\n");
       
}
   }
return 0;
}
