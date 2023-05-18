#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if ((i%400==0)||(i%4==0 && i%100!=0))
        {
            printf("%d\t",i);
            
            
        }
    } 
    return 0;
}
