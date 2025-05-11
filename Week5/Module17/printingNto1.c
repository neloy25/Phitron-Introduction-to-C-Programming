#include<stdio.h>

void print_1_to_n(int i){
    if(i == 0) return;
    printf("%d\n",i);
    print_1_to_n(i-1);
}

int main() {
    int n;
    scanf("%d", &n);
    print_1_to_n(n);
    return 0;
}