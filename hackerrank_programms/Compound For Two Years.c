#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float p,r,t,a;
    scanf("%f\n%f",&p,&r);
    a=p*pow(1+r*0.01,2);
    t=a-p;
    printf("%.2f",t);
    
    return 0;
}
