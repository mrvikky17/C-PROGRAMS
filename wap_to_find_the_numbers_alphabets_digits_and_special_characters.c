#include <stdio.h>
int main() {
    char a[100];
    int alphabets = 0, digits = 0, special = 0, i = 0;

    printf("Enter a string: ");
    scanf("%s",a);

    while (a[i] != '\0') {
        if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')) {
            alphabets++;
        } else if (a[i] >= '0' && a[i] <= '9') {
            digits++;
        } else {
            special++;
        }
        i++;
    }

    printf("Total Alphabets: %d\n", alphabets);
    printf("Total Digits: %d\n", digits);
    printf("Total Special Characters: %d\n", special);

    return 0;
}






