#include <stdio.h>
int main()
{
    int a,b,c,d ;
    scanf("%d",&a);
    a=d;
    while(a>=1)
    {
        b=a%10;
        c+=b*b*b;
        a/=10;
    }
    if (a==c) printf("armstrong");
    else  printf("no");
    return 0;

    
}