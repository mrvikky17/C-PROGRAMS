#include<stdio.h>
#include <string.h>
int main()
{
int i, c=0,len=0,l;
char a[100];
scanf("%s",a);
while (a[i])
{
    i++;
    len++;
}
printf("%d\n",len);
l = strlen(a);
printf("%d\n",l);
printf("%lu",strlen(a));
return 0;
}