#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    a>b && a>c?printf("%d",a):a<b && b>c?printf("%d",b):printf("%d",c);
        
    return 0;
}
