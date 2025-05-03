#include<stdio.h>

int main() {
    int n,star = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++,star++) {
        for (int j = 1; j <= star; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}