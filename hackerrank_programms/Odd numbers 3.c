#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i;
    int n;
    i=1;
    scanf("%d",&n);
    while(i<=n)
    {
        
        if(i%2 != 0)
            printf("%d ",i);
        
        
        i++;
    }
    return 0;
}
