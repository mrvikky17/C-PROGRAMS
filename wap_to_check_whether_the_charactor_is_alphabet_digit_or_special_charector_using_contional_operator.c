#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
   ((ch>='a' && ch<='z') || (ch>='A' && ch<='z'))?printf("alphabet"):(ch>='0' && ch<='9')?printf("digit"):printf("special character");
    
    return 0;
}