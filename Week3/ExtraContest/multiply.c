#include<stdio.h>

int main() {
    int x,y;
    scanf("%d%d%d", &x,&y);
    long long int mul = (long long) x * y;
    printf("%lld",mul);
    return 0;
}