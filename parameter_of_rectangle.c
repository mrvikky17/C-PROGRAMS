#include <stdio.h>
int main()
{
     int length, breadth, parameter;
     printf("enter length  \n enter breadth\n");
     scanf("%d%d",&length,&breadth);
     parameter=2*(length+breadth);
     printf("parameter=%d",parameter );
     return 0;
}