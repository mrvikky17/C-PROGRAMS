#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int c,n,d,t;
    scanf("%d\n%d\n%d\n",&c,&n,&d);
    t=c+n*d;
    printf("%d",t-n);
    return 0;
}
