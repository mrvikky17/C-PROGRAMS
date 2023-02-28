#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if ((ch>='a' && ch<='z') || (ch>='A' && ch<='z'))
    {
        printf("alphabet");
    }
    else
    {
        printf("not alphabet");
    }
    return 0;
}