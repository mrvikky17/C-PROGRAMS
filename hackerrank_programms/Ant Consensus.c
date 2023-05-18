#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    double c,k,n,p;
    scanf("%lf\n%lf\n%lf",&c,&k,&n);
    p=(pow(k,n)*c);
    printf("%.0lf",p);
    return 0;
}
