#include <stdio.h>
#include <math.h>
int main()
{
    float p ,t,r,ci;
    printf("enter P :-");
    scanf("%f",&p);
    printf("enter T :-");
    scanf("%f",&t);
    printf("enter R :-");
    scanf("%f",&r);
    ci=p*pow((1+r/100),t)-p;
    printf("compund interest=%f",ci);
    return 0;
}