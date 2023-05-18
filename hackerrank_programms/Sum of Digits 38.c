#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int t;
    scanf("%d",&t);
    while (t--){
        int n,m,sum=0;
        scanf ("%d",&n);
        while(n>0){
            
            m=n%10;
            n=n/10;
        
            sum=sum+m;
        }
            printf("%d\n",sum);
        
        
        
        
        
        
    }
    
    
    return 0;
}
                        


                     

