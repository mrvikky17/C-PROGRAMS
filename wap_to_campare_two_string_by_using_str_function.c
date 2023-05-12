#include <stdio.h>
#include <string.h>
int main()
{
    int i ;
    char a[100],b[100],d;
    scanf("%s",a);
    scanf("%c",&d);
    scanf("%s",b);
    int k = strcmp(a,b);
    if(k==0)
    printf("both are equal");
    else if (k>0)
    printf("a is greater");
    else 
    printf("b is greater");
    return 0 ;
}