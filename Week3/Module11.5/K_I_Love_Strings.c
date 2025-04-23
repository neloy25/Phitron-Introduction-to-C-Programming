#include<stdio.h>
#include<string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[51],t[51];
        scanf("%s%s", s,t);
        int s_len = strlen(s);
        int t_len = strlen(t);
        int n;
        if(s_len < t_len) n = s_len * 2;
        else n = t_len * 2;
        char res[s_len + t_len + 1];

        for (int i = 0; i < n; i++) {
            if(i % 2 == 0) res[i] = s[i / 2];
            else res[i] = t[i / 2];
        }

        if(s_len > t_len){
            for(int i = t_len; i < s_len; i++){
                res[n + i - t_len] = s[i];
            }
        } else{
            for(int i = s_len; i < t_len; i++){
                res[n + i - s_len] = t[i];
            }
        }
        res[s_len + t_len] = '\0';
        printf("%s\n", res);
    }
    return 0;
}