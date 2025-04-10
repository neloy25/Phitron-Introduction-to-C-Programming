#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int remainder = 0;
    int divisor = 1;
    int a = n;
    while(a > 10){
        a = a / 10;
        divisor = divisor * 10;
    }
    //printf("%d",divisor);
    
    while(divisor > 0){
        remainder = (n - (n % divisor)) / divisor;
        n = n % divisor;
        divisor = divisor / 10;
        printf("%d\n",remainder);
    }
    return 0;
}