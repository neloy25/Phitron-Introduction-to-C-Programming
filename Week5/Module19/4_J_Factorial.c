#include<stdio.h>

long long int factorial(int n, long long int fact,int i){
    fact *= i;
    if(i == n) return fact;
    factorial(n,fact,i+1);
}

int main() {
    int n;
    scanf("%d", &n);
    long long int res = factorial(n,(long) 1,1);
    printf("%lld", res);
    return 0;
}