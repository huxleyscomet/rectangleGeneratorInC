#include <stdio.h>

int main() {
    int r, c;
    printf("Please enter the number of rows");
    scanf_s("%d", &r);
    printf("Please enter the number of columns");
    scanf_s("%d", &c);
    for (int i = 1; i <= r+2; i++) {
        printf("*");
    }
    printf("\n");
    for (int j = 1; j <= c-1; j++) {
        printf("*");
        for (int k = 1; k <= r; k++) {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for (int i = 1; i <= r+2; i++) {
        printf("*");
    }

    return 0;
}
