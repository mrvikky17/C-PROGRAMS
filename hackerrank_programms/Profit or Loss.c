#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float C,S,p,l;
    scanf("%f",&C);
    scanf("%f",&S);
    if (S>C)  {
        printf("Profit\n");
        p=((S-C)/C)*100;
        printf("%.2f%%",p);}
    else {
        printf("Loss\n");
        l=((C-S)/C)*100;
           printf("%.2f%%",l);
    }
    return 0;
}
