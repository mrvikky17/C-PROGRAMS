#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,ele,f=0,index,m;
    printf("enter m");
    scanf("%d",&m);
    for(i=1;i<m;i++)
    scanf("%d",&a[i]);
    printf("enter element");
    scanf("%d",&ele);
    for (i=0;i<5;i++)
    {
        if (a[i]==ele)
        {
            f=1;
            index=i;
            break;
        }
    }
    if (f==1)
    printf("element is found");
    else 
    printf("not found");
    return 0 ;
    
}