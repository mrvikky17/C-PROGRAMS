#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n],i;
    printf("enter elements");
    
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for (int i =0; i<n;i++)
    printf("%d  ",a[i]);
    return 0;
    
    
}