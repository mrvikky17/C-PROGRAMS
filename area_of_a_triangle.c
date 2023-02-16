#include <stdio.h>
int main()
{
    float base,height,area ;
    printf("enter base :-");
    scanf("%f",&base);
    printf("enter height :-");
    scanf("%f",&height);
    area=(base+height)/(float)2;
    printf("%f",area);
    return 0;
}