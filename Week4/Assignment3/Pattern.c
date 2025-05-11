#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int ch = 1;
    int spc = n - 1;
    for (int i = 1; i <= n; i++) {
        for (int j = spc; j >= 1; j--) {
            printf(" ");
        }

        for (int j = 1; j <= ch; j++) {
            if(i % 2 == 1) printf("#");
            else printf("-");
        }
        ch+=2;
        spc--;
        printf("\n");
    }

    ch = 2 * n - 3;
    spc = 1;
    for (int i = n + 1; i <= 2 * n - 1; i++) {
        for (int j = 1; j <= spc; j++) {
            printf(" ");
        }

        for (int j = 1; j <= ch; j++) {
            if(i % 2 == 1) printf("#");
            else printf("-");
        }
        ch-=2;
        spc++;
        printf("\n");
    }
    return 0;
}