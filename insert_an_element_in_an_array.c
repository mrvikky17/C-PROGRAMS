#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],m,i,ele,pos ;
    printf("enter m");
    scanf("%d",&m);
    if (m>n)
    printf("array is full");
    else {
        for (i=0;i<m;i++)
        scanf("%d",&a[i]);
        printf("enter element and position\n");
        scanf("%d \n %d",&ele ,&pos );
        for (i=m-1;i>=pos;i--)
        {
            a[i+1]=a[i];
        }
        a[pos]= ele;
        m++ ;
        for (i=0;i<m;i++)
        printf("%d",a[i]);
    }
    return 0;
    
}