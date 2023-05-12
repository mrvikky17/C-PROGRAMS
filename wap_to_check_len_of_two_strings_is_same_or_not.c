
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[100],d;
    int i,j,len1=0,len2=0,len3,len4;
    scanf("%s",a);
    scanf("%c",&d);
    scanf("%s",b);
    while (a[i])
{
    i++;
    len1++;
}
printf("len of first string :- ");
printf("%d\n",len1);
    while (b[j])
{
    j++;
    len2++;
}
printf("len of second string :- ");
printf("%d\n",len2);

if (len1>len2)
{
    printf("%s\n",a);
}
else 
{
    printf("%s\n",b);
}
printf("printf after using function \n ");
len3 = strlen(a);
len4 = strlen(b);
if (len3>len4)
{
    printf("%s",a);
}
else 
{
    printf("%s",b);
}
    return 0;
}