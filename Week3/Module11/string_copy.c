#include<stdio.h>
#include<string.h>

int main() {
    char s1[101];
    scanf("%s", &s1);
    char s2[101];
    scanf("%s", &s2);

    for (int i = 0; i <= strlen(s2); i++) {
        s1[i] = s2[i];
    }

    printf("%s %s", s1,s2);
    return 0;
}