#include <stdio.h>
int main() 
{
 
    int n;
    printf("Enter number ");
    scanf("%d",&n);
    switch(n%2==0)
    {   
        case 0: 
            printf("ODD");
            break;
        case 1: 
            printf("EVEN");
            break;
    }
return 0;
}