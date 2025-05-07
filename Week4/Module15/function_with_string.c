#include<stdio.h>

void fun(char s[]){
    printf("%s", s);
}

int main() {
    char s[] = "hello";
    fun(s);
    return 0;
}