#include <stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    switch(a) 
    {
        case 1 :
        printf("MONDAY");
        break ;
        case 2 :
        printf("TUESDAY");
        break ;
        case 3 :
        printf("WEDNESDAY");
        break ;
        case 4 :
        printf("THURSDAY");
        break ;
        case 5:
        printf("FRIDAY");
        break ;
        case 6 :
        printf("SATURDAY");
        break ;
        case 7 :
        printf("SUNDAY");
        break  ;
        default :
        printf("INVALID NUMBER");
    }
    return 0;
}