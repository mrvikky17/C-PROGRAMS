#include <stdio.h>
int main ()
{
    char a[100] ;
    int i, b[26]={0};
    printf("enter  a string ");
    scanf("%s",a);
    for (i=0;a[i];i++)
    {
        b[a[i]-97]++;
    }
    for (i=0;i<26;i++)
    {
        if (b[i]>0)
        printf("%c=%d\n",i+97,b[i]);
    }
    return 0 ;
}