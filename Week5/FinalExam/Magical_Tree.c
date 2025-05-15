#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int first = (n + 1) / 2;
    int spc = 3 + first;
    int star = 1;
    for (int i = 1; i <= first + 5; i++) {
        for (int j= 0; j<= spc; j++) {
            printf(" ");
        }

        for (int k = 1; k <= star; k++) {
            printf("*");
        }
        printf("\n");
        star+=2;
        spc--;
    }

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf(" ");
        }

        for (int k = 1; k <= n; k++) {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}