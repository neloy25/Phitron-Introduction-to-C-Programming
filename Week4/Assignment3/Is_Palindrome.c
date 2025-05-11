#include<stdio.h>
#include<string.h>

int is_palindrome(char s[]){
    int left = 0;
    int right = strlen(s) - 1;
    while(left < right){
        if(s[left] != s[right]){
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main() {
    char s[1001];
    scanf("%s", s);
    int check = is_palindrome(s);
    if(check) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}