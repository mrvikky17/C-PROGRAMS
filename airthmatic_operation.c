#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("sum=%d,sub=%d,mult=%d,div=%f",a+b,a-b,a*b,a/(float)b);
    return 0;
}