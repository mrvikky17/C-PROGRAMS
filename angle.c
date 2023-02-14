#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter two angles of a triangle\n");
    scanf("%d%d",&a,&b);
    c=180-(a+b);
    printf("third angle of triangle=%d",c);
    return 0;
    
}