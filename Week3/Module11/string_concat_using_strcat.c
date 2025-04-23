#include<stdio.h>
#include<string.h>

int main() {
    char s1[101];
    char s2[101];

    scanf("%s%s", &s1,&s2);
    strcat(s1,s2);
    printf("%s %s", s1,s2);
    return 0;
}