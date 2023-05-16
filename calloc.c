#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p , i,sum=0,n;
    printf("enter n");
    scanf("%d",&n);
    p=(int*)calloc(n,3);
    if (p==NULL)
    {
        printf("MEMORY OVERFLOW");
        exit(1);
    }
    else {
        for(i=0;i<n;i++)
        {
            scanf("%d",&p[i]);
            sum=sum+p[i];
        }
        
        printf("%d",sum);
    }
    return 0;
}