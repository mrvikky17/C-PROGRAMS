#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,reverse=0,remainder,orignal;
    scanf("%d",&n);
    orignal=n;
    while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n = n/10;
       
  }  
    if (orignal==reverse)
    {
        printf("Palindrome.");
    }
    else 
        printf("Not Palindrome.");
    return 0;
}
