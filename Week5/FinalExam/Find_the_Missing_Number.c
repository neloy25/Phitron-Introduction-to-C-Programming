#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long int n;
        int a,b,c;
        scanf("%lld%d%d%d", &n,&a,&b,&c);

        int mul = a * b * c;
        if(n % mul == 0){
            printf("%lld\n", n / mul);
        } else{
            printf("-1\n");
        }
    }
    return 0;
}