#include<stdio.h>

int length(char s[],int i){
    if(s[i] == '\0') return 0;
    int count = length(s,i+1);
    return count+1;
}

int main() {
    char s[201];
    fgets(s,201,stdin);

    int len = length(s,0);
    printf("%d", len);
    return 0;
}