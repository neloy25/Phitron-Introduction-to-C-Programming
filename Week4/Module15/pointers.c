#include<stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    printf("%p\n", &x);
    int* p = &x;
    printf("%p", p);
    return 0;
}