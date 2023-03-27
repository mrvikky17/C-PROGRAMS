#include <stdio.h>
int main ()
{
    int a,b,c;
    scanf ("%d",&a);
    int d=a;
    while (a>=1)
    {
        b=a%10;
        a=a/10;
        c=10*c+b;
    }
    if (c==d) printf("pallindrome");
    else printf("not pallindrom");
    return 0;
}