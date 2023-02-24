#include <stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    (a>='a' && a<='z')||(a>='A' && a<='Z' )?printf("alphabet"):printf("no");
    return 0;
    
}