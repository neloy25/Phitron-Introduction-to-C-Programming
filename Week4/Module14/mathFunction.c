#include<stdio.h>
#include<math.h>

int main() {
    double a;
    scanf("%lf", &a);

    int k = ceil(a);
    printf("%d\n", k);
    int b = floor(a);
    printf("%d\n", b);
    int c = round(a);
    printf("%d\n", c);
    double d = sqrt(a);
    printf("%lf\n", d);
    int e = pow(a,2);
    printf("%d\n", e);
    int f = abs(-4);
    printf("%d", f);
    return 0;
}