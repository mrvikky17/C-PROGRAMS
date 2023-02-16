#include <stdio.h>
int main()
{
    float a,b,c,d,e,total,average,percentage;
    printf("enter number of a student :- \n");
    scanf("%f\n",&a);
    scanf("%f\n",&b);
    scanf("%f\n",&c);
    scanf("%f\n",&d);
    scanf("%f",&e);
    total=a+b+c+d+e;
    average=total/(float)5;
    percentage=(total/(float)500)*100;
    printf("total=%f \naverage=%f \npercentage=%f",total,average,percentage);
    return 0;
}