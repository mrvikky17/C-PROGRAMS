#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    (year%4==0  || year%400==0)?printf("LEAP YEAR"):printf("NO LEAP YEAR");
    return 0;
}