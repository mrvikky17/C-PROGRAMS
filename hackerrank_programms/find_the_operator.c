#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    a+b==c?printf("+"):a-b==c?printf("-"):a/b==c?printf("/"):a*b==c?printf("*"):a%b==c?printf("%%"):b%a==c?printf("%%"):printf("");
    return 0;
}
