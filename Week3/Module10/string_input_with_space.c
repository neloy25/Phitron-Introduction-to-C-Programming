#include<stdio.h>

int main() {
    char s[34];
    // gets(s);
    fgets(s,15,stdin);
    printf("%s", s);
    return 0;
}