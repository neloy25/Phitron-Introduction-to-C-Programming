#include<stdio.h>

int main() {
    char s[15];
    scanf("%s", &s);
    int count = 0;
    for(int i = 0; s[i] != '\0';i++){
        count++;
    }
    printf("%d", count);
    return 0;
}