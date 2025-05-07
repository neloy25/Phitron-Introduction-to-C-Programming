#include<stdio.h>

void fun(int x){
    x = 20;
    printf("Adress in fun: %p\n", &x);
}
int main() {
    int x = 10;
    fun(x);
    printf("Adress in main: %p\n", &x);
    printf("%d\n", x);
    return 0;
}