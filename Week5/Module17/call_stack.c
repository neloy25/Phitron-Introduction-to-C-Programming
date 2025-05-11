#include<stdio.h>

void mello(){
    printf("Mello\n");
}

void gello(){
    printf("Welcome to Gello\n");
    mello();
    printf("Back to Gello\n");
}

void hello(){
    printf("Welcome to Hello\n");
    gello();
    printf("Back to Hello\n");
}

int main() {
    printf("Welcome to Main\n");
    hello();
    printf("Back to Main\n");
    return 0;
}