#include<stdio.h>
#include<string.h>

int main() {
    char s1[101];
    scanf("%s", &s1);
    char s2[101];
    scanf("%s", &s2);

    int len_1 = strlen(s1);
    int len_2 = strlen(s2);

    for (int i = 0; i <= len_2; i++) {
        s1[i + len_1] = s2[i];
    }

    printf("%s %s", s1,s2);
    return 0;
}