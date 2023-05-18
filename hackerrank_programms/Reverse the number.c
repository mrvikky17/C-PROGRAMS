#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

       int n,rev=0,remainder;
    scanf("%d",&n);
    while (n != 0) {
    remainder = n % 10;
    rev = rev * 10 + remainder;
    n /= 10;
  }
        printf("%d",rev);
    
    return 0;
}
