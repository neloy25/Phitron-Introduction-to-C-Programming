#include<stdio.h>
#include<string.h>

int main() {
    char s[1000001];
    scanf("%s", &s);
    int n = strlen(s);

    int count_letter[26] = {0};
    
    for (int i = 0; i < n; i++) {
        int val = s[i] - 'a';
        count_letter[val]++;
    }

    for (int i = 0; i < 26; i++) {
        if(count_letter[i] > 0){
            printf("%c : %d\n", i + 97,count_letter[i]);
        }
    }
    return 0;
}