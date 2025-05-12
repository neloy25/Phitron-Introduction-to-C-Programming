#include<stdio.h>

void print_1_to_n(int i,int n){
    if(i == 1){
        printf("%d",i);
        return;
    }
    printf("%d ",i);
    print_1_to_n(i-1,n);
}

int main() {
    int n;
    scanf("%d", &n);
    print_1_to_n(n,n);
    return 0;
}