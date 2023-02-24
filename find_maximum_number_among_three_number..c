#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    (a>b && a>c)?printf("%d is the largest number",a):(b>a && b>c)?printf("%d is the largest number",b):printf("%d is the largest number",c); ;
    return 0;
}
