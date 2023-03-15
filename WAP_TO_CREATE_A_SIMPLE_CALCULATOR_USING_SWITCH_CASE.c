#include <stdio.h>
int main() 
{
 
    int a,b;
    char n;
    printf("enter first element\n");
    scanf("%d",&a);
    printf("enter operator\n");
    scanf("%c%c",&n,&n);
    printf("enter second element\n");
    scanf("%d",&b);
    switch (n)
    {
        case '+' :
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        default :
        printf("wrong operator");
        
    }
    
    
return 0;
}