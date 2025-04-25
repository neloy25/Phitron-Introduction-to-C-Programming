#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int m1,m2,d;
        scanf("%d%d%d", &m1,&m2,&d);
        int new_d = (m1 * d) / (m1 + m2);
        printf("%d\n", d - new_d);
    }
    return 0;
}