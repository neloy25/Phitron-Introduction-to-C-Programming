#include<stdio.h>

void print_1_to_n(int i){
    if(i == 5) return;
    printf("%d\n",i);
    print_1_to_n(i+1);
}

int main() {
    print_1_to_n(1);
    return 0;
}