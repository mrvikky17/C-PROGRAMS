#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i;
    
    scanf("%d",&n);
    for (i=1;i<=10;i++)
    {
        printf("%d\n",n*i);
    }
    return 0;
}
