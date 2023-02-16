#include <stdio.h>
int main()
{
    float p ,t,r,si;
    printf("enter P :-");
    scanf("%f",&p);
    printf("enter T :-");
    scanf("%f",&t);
    printf("enter R :-");
    scanf("%f",&r);
    si=(p*r*t)/(float)100;
    printf("simple intrest=%f",si);
    return 0;
}