#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b,c,d,i,x;
    scanf("%d",&i);
    for(x=1;x<=i;x=x+1)
    {
        scanf("%d%d%d",&a,&b,&c);
        d=a+b+c;
        (d==180)?printf("YES\n"):
                        printf("NO\n");
    }
    return 0;
}
