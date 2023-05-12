#include<stdio.h>
#include <string.h>
int main()
{

char a[100],b[100],c[100];
int i ;
scanf("%[^\n]c",a);
for (i=0;a[i];i++)
{
    b[i] = a[i];
}
b[i]=0;
b[i]='\0';
printf("%s\n",b);
strcpy(c,a);
printf("%s\n",c);
return 0;
}