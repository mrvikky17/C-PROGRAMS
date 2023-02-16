#include <stdio.h>
#include <math.h>
int main()
{
    float a,area;
    printf("enter side of triangle :-");
    scanf("%f",&a);
    area=(sqrt(3)/4)*a*a;
    printf("%f",area);
    return 0 ;
}