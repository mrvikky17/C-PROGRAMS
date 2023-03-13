#include <stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    switch(a) 
    {
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10 :
        case 12 :
        printf("31 DAYS IN THIS MONTH");
        break ;
        case 2:
        printf("28 DAYS IN THIS MONTH");
        break ;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("30 DAYS IN THIS MONTH");
        break ;
        default :
        printf("INVALID MONTH");
    }
    return 0;
}