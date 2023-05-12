#include <stdio.h>
int main()
{
    int i;
    char a[100];
    scanf("%s",a);
    for (i = 0;a[i];i++)
    {
        if (a[i]>=97 && a[i]<=122)
        printf("%c",a[i]);
        else 
        printf("%c",a[i]+32);
    }
    return  0 ;
    
}