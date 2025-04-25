#include<stdio.h>
#include<string.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        char s[10001];
        scanf("%s", &s);
        int len = strlen(s);

        int cap = 0,small = 0,digit= 0;
        for (int i = 0; i < len; i++) {
            int val = s[i];
            if(val >= 'A' && val <= 'Z') cap++;
            else if(val >= 'a' && val <= 'z') small++;
            else if(val >= '0' && val <= '9') digit++;
        }

        printf("%d %d %d\n", cap,small,digit);
    }
    return 0;
}