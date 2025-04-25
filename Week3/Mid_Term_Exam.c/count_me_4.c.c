#include<stdio.h>
#include<string.h>

int main() {
    char s[10001];
    scanf("%s", &s);

    int len = strlen(s);
    int check[26];

    for (int i = 0 ; i < len; i++) {
        int val = s[i] - 'a';
        check[val]++;
    }

    for (int i = 0; i < 26; i++) {
        if(check[i] > 0){
            char val = i + 97;
            printf("%c - %d\n",val,check[i]);
        }
    }
    return 0;
}