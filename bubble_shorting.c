#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    int a[n],temp;
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("sorted list\n");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    printf("\n");
return 0;
}